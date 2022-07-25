#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#pragma warning(disable:4996)

#define MAX 41

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13

char snake[42] = "*++++++++++++++++++++++++++++";

struct snake_internal
{
	int body_x[41], body_y[41];
	int body_dx, body_dy;
	int cur_len, org_len;
}snake_attr;

char screen[25][80];
char life;
int apple;
char apple_data[3] = { 2, 2, 2 };

void clearscr(void);
void apple_item(int ea);
void select_direction(void);
int decide(int no);
void gotoxy(int x, int y);
void read_map(int no);
void timing(void);
void initial(void);

void main(void)
{
	int i;
	int j, u;
	
	life = 3;

	for (i = 0; i < 3; i++)
	{
			gotoxy(5, 5);
			printf("stage : %d \n", i + 1);
			getchar();

			read_map(i);
			initial();
			apple_item(i);

			do
			{
				timing();
				select_direction();
			} while (decide(i));
	}

	printf("Congratulation!! \n\n");
}

void timing(void)
{
	DWORD			thisTickCount;
	static DWORD	lastTickCount = 0;
	DWORD			delay = 200;

	thisTickCount = GetTickCount();

	while (1)
	{
			if ((thisTickCount - lastTickCount) > delay)
			{
				lastTickCount = thisTickCount;
				return;
			}

			thisTickCount = GetTickCount();
	}
}

void initial(void)
{
	int i;
	
	snake_attr.org_len = 41;
	snake_attr.cur_len = 21;

	for (i = 0; i < snake_attr.org_len; i++)
	{
			snake_attr.body_x[i] = snake_attr.org_len + 1 - i;
			snake_attr.body_y[i] = 5;
	}

	for (i = 0; i < snake_attr.cur_len; i++)
	{
			gotoxy(snake_attr.org_len + 1 - i, 5);
			printf("%c", snake[i]);
	}

	snake_attr.body_dx = 1;
	snake_attr.body_dy = 0;
}

void read_map(int no)
{
	FILE *fp;
	char filename[60];
	int number[1];
	int i, j;

	clearscr();

	strcpy(filename, "d:\\�ڷ�\\��ǻ�� ���α׷���\\������ũ\\3\\map");
	strcat(filename, itoa(no, number, 10));
	strcat(filename, ".txt");

	fp = fopen(filename, "rt");
	if (fp == NULL)
	{
			gotoxy(30, 12);
			printf("Cannot open input file. \n");
			getchar();
			exit(1);
	}

	for (i = 0; i < 25; i++)
		fgets(screen[i], 2000, fp);

	fclose(fp);
}

void clearscr()
{
	int i, j;

	for (i = 0; i < 25; i++)
		for (j = 0; j < 80; j++)
			screen[i][j] = NULL;

	for (i = 0; i < 25; i++)
	{
			for (j = 0; j < 80; j++)
			{
				gotoxy(j, i);
				printf(" ");
			}
	}
}

void apple_item(int ea)
{
	int i, j, x, y;

	apple = apple_data[ea];
	for (i = 0; i < apple_data[ea]; i++)
	{
			do
			{
				srand((unsigned int)time(NULL));
				x = rand() % 80;
				y = rand() % 25;
			} while (screen[y][x] == '#' || screen[y][x] == '*' || screen[y][x] == '+' || screen[y][x] == '@');

			screen[y][x] = '@';
	}

	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 80; j++)
		{
					if (screen[i][j] == '#' || screen[i][j] == '@' || screen[i][j] == '*')
					{ 
						gotoxy(j, i);
						printf("%c", screen[i][j]);
					}
		}
		
		printf("\n");
	}
}

void select_direction(void)
{
	int i;
	int key;
	char prev_x, prev_y;

	if (kbhit())
	{
			key = getch();

			switch (key)
			{
					case LEFT:		snake_attr.body_dx = -1;
									snake_attr.body_dy = 0;	 break;

					case RIGHT:		snake_attr.body_dx = 1;
									snake_attr.body_dy = 0;  break;

					case UP:		snake_attr.body_dx = 0;
									snake_attr.body_dy = -1; break;

					case DOWN:		snake_attr.body_dx = 0;
									snake_attr.body_dy = 1; break;

					case ENTER:		printf("\n\n          Program aborted");
									exit(0);
			}
	}

	prev_x = snake_attr.body_x[snake_attr.cur_len - 1];
	prev_y = snake_attr.body_y[snake_attr.cur_len - 1];
	for (i = snake_attr.org_len - 2; i >= 0; i--)
	{
		snake_attr.body_x[i + 1] = snake_attr.body_x[i];
		snake_attr.body_y[i + 1] = snake_attr.body_y[i];
	}
	if (snake_attr.body_dx == 1)
		snake_attr.body_x[0]++;
	else
	if (snake_attr.body_dx == -1)
		snake_attr.body_x[0]--;
	else
	if (snake_attr.body_dy == 1)
		snake_attr.body_y[0]++;
	else
	if (snake_attr.body_dy == -1)
		snake_attr.body_y[0]--;

	gotoxy(prev_x, prev_y);
	printf(" ");

	if (snake_attr.body_x[0] >= 1 && snake_attr.body_x[0] <= 80 &&
		snake_attr.body_y[0] >= 1 && snake_attr.body_y[0] <= 25)
	{
			gotoxy(snake_attr.body_x[0], snake_attr.body_y[0]);
			printf("%c", snake[0]);
	}

	for (i = 1; i < snake_attr.cur_len; i++)
	{
		gotoxy(snake_attr.body_x[i], snake_attr.body_y[i]);
		printf("%c", snake[i]);
	}
}

int decide(int no)
{
	char retry;
	int i;

	if (screen[snake_attr.body_y[0]][snake_attr.body_x[0]] == '@')
	{
			snake_attr.cur_len += 5;
			apple--;
			if (apple == 0)
				return 0;
	}

	for (i = 1; i < snake_attr.cur_len; i++)
	{
			if (snake_attr.body_x[0] == snake_attr.body_x[i] &&
				snake_attr.body_y[0] == snake_attr.body_y[i])
			{
				life--;
				if (life > 0)
				{
						read_map(no);
						initial();

						apple_item(no);
						break;
				}
			}
	}

	if (snake_attr.body_x[0] == 0 || snake_attr.body_x[0] > 80 ||
		snake_attr.body_y[0] == 0 || snake_attr.body_y[0] > 25 ||
		screen[snake_attr.body_y[0]][snake_attr.body_x[0]] == '#')
	{
			life--;
			if (life > 0)
			{
					read_map(no);
					initial();
					apple_item(no);
			}
	}

	if (life == 0)
	{
			gotoxy(30, 12);
			printf(" G A M E  O V E R !");

			gotoxy(32, 15);
			printf("retry ? (Y/N)");

			scanf("%c", &retry);
			if (toupper(retry) == 'Y') main();
			else                       exit(0);
	}
}

void gotoxy(int x, int y)
{
	COORD Location;
	Location.X = x;
	Location.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Location);
}