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
char apple_data[3] = { 1, 2, 3 };

void read_map(int no);
void apple_item(int ea);
void clearscr();
void gotoxy(int x, int y);

int main(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		read_map(i);
		apple_item(i);
		getch();
	}
}

void read_map(int no)
{
	FILE *fp;
	char filename[60];
	int number[1];
	int i, j;

	clearscr();

	strcpy(filename, "d:\\자료\\컴퓨터 프로그래밍\\스네이크\\맵의 생성\\map");
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
		fgets(screen[i], 2000, fp);		// 이부분이 다름

	fclose(fp);
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

void gotoxy(int x, int y)
{
	COORD Location;
	Location.X = x;
	Location.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Location);
}