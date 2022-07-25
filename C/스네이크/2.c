#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>

#pragma warning(disable:4996)
#define MAX 41

/*
#define RIGHT	'6'		// ����? �� ����? �ƽ�Ű �ڵ�� ������ �ص� ���� �ʳ�?
#define LEFT	'4'
#define DOWN	'2'
#define UP		'8'
#define END		'0'
*/						//�� �̰� �ֳ�

// Ű ���� //
#define LEFT	75
#define RIGHT	77
#define UP		72
#define DOWN	80
#define ENTER	13

char snake[42] = "*++++++++++++++++++++++++++++";

// ������ũ ����ü //
struct snake_internal
{
	int body_x[41], body_y[41];
	int body_dx, body_dy;
	int cur_len, org_len;		//org_len���� org �̰� ���� ����?
} snake_attr;

char screen[25][80];			// �̰� �� [80][25] �ƴϳ�?
char life;						// ������ ���ڷ�? ������ �ƴ϶�?
int apple;
char apple_data[6] = { 2, 3, 3, 4, 5, 5 };

void timing(void);				// Ŭ��ƽ?
void initial(void);				// ��... ȭ���� �ʱ�ȭ, ���� ����, ����� ���� ���?
void read_map(int no);			// �̰� ���� �� �о�ͼ� ���
								
								// ������ ������ �ϱ� ���� �ٽ� �Լ�
								// ���� �� �� ���� �ž� �Լ����� ��ɿ� ���� ���̰� �ֳ�?
								// ������ ���� ���� ���

void clearscr(void);			// ȭ���� �ʱ�ȭ
void apple_item(int ea);		// �̰� ���� ��... ����� ������ ����
void select_direction(void);	// ����Ű�� �Է¿� ���� ���� ��ȯ
int decide(int no);				// �����ϰ� ��ȯ���� �ִ� �Լ� �̰� ����� ������ ��... �ٽ��ϱ�?
void currentXY(int x, int y);	// ��ǥ�� ��ȯ

void main(void)
{
	int i;

	life = 3;						// ���� 3�� �ش�.

	for (i = 0; i < 6; i++)			// ���� 6�� ����
	{
		if (i == 2 || i == 4)		// �������� 2, 4 ���� ������ �ϳ� �� ��
			life++;

		read_map(i);				// ���������� �°� ���� �ҷ���
		initial();					// ���� ���� (�̰� ���� �� ���ϱ� �������� �Ѿ�� �� ���� �ʱ�ȭ �ǳ�)
		apple_item(i);				// ���������� �°� ����� ��

		do
		{
			timing();				// �̰� �� �ִ°���? ���ϱ� �����Ѵ�� ƽ..ƽ...ƽ.. �̰ų�
									// �̰� ����� ���� ��û�� �ӵ��� �����ٰ� ���̹��� 
									// ���� �����ڸ� �ܼ�������� ������ ������ ������ �ؼ� �ð��� ���°��� 
			select_direction();		// �̰ɷ� ������ȯ Ȯ���ϸ鼭 �� �����̰�
		} while (decide(i));		// ��, ����, ��� �̷��� �ε�ġ�ų� �Ծ����� Ȯ���ϰ�

		printf("nextlevel : %d \n", i);		// ����� ��� while(0)�� �Ǹ� nextlevel �����
		getchar();							// �ٷ� �����ʰ� �Է¹��� �� ���� �ѹ� ���� �ٽ� ���� ����
	}
}

void timing(void)
{
	DWORD				thisTickCount;			// typedef unsigned long DWORD (DWORD�� ���� ����?)
	static DWORD		lastTickCount = 0;		// �� 0�� ����������?
	DWORD				delay = 300;			// delay�� ũ���ϸ� ���� �ӵ��� �ö󰡴� �ǰ�?
												// delay�� �峭�� �ĺôµ� ���߸� (�ӵ��� ������, Ű���忡 ���� ������ ����)
												//						   ���̸� (�ӵ��� ������, Ű���忡 ���� �ݵ��� ����)

	// Ŭ�� ƽ�� ���´� //
	thisTickCount = GetTickCount();				// �̰� ��... 1970�� 1�� 1�� ������ ����� �ð��� �� ������ ��ȯ�� �� �ΰ�?
												// ��� �޸��忡 ������µ� ������ �����ڸ� �Լ��� ��� �ð��� �� �� �����
												// GetTickCount()�� ��ȯ���� 'DWORD' ��� ���� Ȯ���ϰ� ����.

	while (1)
	{
		// Ŭ�� ƽ�� ȹ���� ���Ѵ� //
		if ((thisTickCount - lastTickCount) > delay) // �̰� if�� ������ �� ���µ�? (����) > delay �ε�?
													 // �� lastTickCount�� 0�̳�... �׷� ������ �����ε�?
													 // �ƴ� 0�ε� ���ʿ� �� ���°ž�?

			// ��..!! �˰ڴ� ó�� ���� 2000 - 0 �̷� �����ݾ�?
			// �翬�� 300���� ũ��? �ƴѰ�.... ��ư �׷��� lastTickCount = 2000 �ְ� ��ȯ�ϰ� 
			// do{}while(); �̴ϱ� ���� �ȿ����� ��� ���ݾ�? �׷� �ι�°�� ���ڰ� �̹��� ���� ��... 2050 - 2000 �̷��� �ǰ���?
			// �׷� 300 �ȳ��ݾ� �׷��� 2070...2100..2200...2301 �̷������� ���ݾ� �Ʒ� thisTickCount = GetTickCount(); �̰� �����ϱ�
			// �׷� �� 300 ����? �׷��� �ٽ� ��ȯ�ϰ� �׷����� 
			// ���� ƽ...ƽ... �̷��°� void timing(void) ������ �̷��� �ܼ� ������� ������ �� ���� �ݺ��ϴϱ� �߰��� ����� ����
			// �׷��ϱ� delay ���� ���߸� ���ð��� �پ��ϱ� ���� �� ������ ƽ.ƽ.ƽ �̷������� ���°���
			// Ű����� ��� �Ȱɱ�? �� ������... ���� Ű���� ������ �� �׷� ���� void select_direction(void) ���
			// �� ������ �ٲ�߰ڴµ� void timing(void) �갡 ���� ������̴ϱ� ������ȯ�� �������°��� main�Լ�����
			// timing�� select_direction ���� ���� ���ݾ�.
		{
			lastTickCount = thisTickCount;			 // lastTickCount = thisTickCount; �ϱ� ���߿� 0�� �ƴ϶� �ٸ� ���� �������� (�Ƹ���)
			return;									 // return? �̰� �ѹ����ڰ� while(1)�� �����߾�?
		}

		thisTickCount = GetTickCount();				 // �̰� ���ʿ� �ش� �� �� �־�?
	}
}

void initial(void)
{
	int i;
	
	snake_attr.org_len = 41;									// ���� �ִ� ����
	snake_attr.cur_len = 21;									// ���� ���� ����

	for (i = 0; i < snake_attr.org_len; i++)					// i �� 0���� 40���� i++ (�� for���� �ι� ���� �� �ִ��� �𸣰ڴ�.)
	{
		snake_attr.body_x[i] = snake_attr.org_len + 1 - i;		// snake_attr.body_x[0] = 42 ~~ snake_attr.body_x[40] = 2
		snake_attr.body_y[i] = 5;								// snake_attr.body_y[0] = 5  ~~ snake_attr.body_y[40] = 5
	}															// ó���� �򰥷ȴ� �ǵ� 2�� �迭�� �ƴ϶� 1�� �迭�̶�� ��...

	for (i = 0; i < snake_attr.cur_len; i++)					// i �� 0���� 20���� i++ (�̰� ���� �� �ִ��� �˰ڴµ�)
	{
		currentXY(snake_attr.org_len + 1 - i, 5);				// currentXY(42, 5) ~~ currentXY(22, 5) -> (������̰� 21�϶�)
		printf("%c", snake[i]);									// ���� ���
	}

	snake_attr.body_dx = 1;										// ������ �������� ����
	snake_attr.body_dy = 0;										// ��, �Ʒ� ���� ��ȯ�� ����...
															// �̶��! ������ �ϰ� �ִ°��� ���� ��Ȳ���δ� �׳� ���� ���Կ� �Ұ���..
}

void read_map(int no)
{
	FILE *fp;
	char filename[50];
	char number[1];
	int i, j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 80; j++)				// �̰� 2�� ¥�������� �߰�ȣ�� �ȹ�� �ǳ�?
			screen[i][j] = NULL;

	clearscr();									// ������ NULL�� �ʱ�ȭ �Ѱ� �ƴѰ�? �� �Լ��� ���ϴµ� ���°ž�

	strcpy(filename, "d:\\�ڷ�\\��ǻ�� ���α׷���\\������ũ\\2\\map");				// ���� ��θ� filename�� ����
	strcat(filename, itoa(no, number, 10));		// no(�� �������� ����)(����) �� 10������ ���ڿ��� ��ȯ �� number�� ���� ��
												// filename �� �̾����
	strcat(filename, ".txt");					// �������� .txt �� �̾���� (1�������� ���̶�� -> d:\\...1.txt)

	fp = fopen(filename, "rt");					// ������ ���� filename ��θ� ���� rt(�ؽ�Ʈ �б�)�� ��� fp�� ����
	if (fp == NULL)								// ��� ������ ���� ���� �о ���� ���� �ʾҴٸ�
	{
		currentXY(30, 12);						// 30, 12 ��ġ��
		printf("Cannot open input file. \n");	// Cannot open input file. ���
		getchar();								// �ڵ����� ������ �ʰ� �Է��� ���� �� ���� ��ٸ�
		exit(1);								// �Է��� ���� �� ���α׷� ����
	}

	for (i = 0; i < 24; i++)					// 0���� 23���� i++
		fgets(screen[i], 80, fp);				// screen[0][0]  ~~ screen[0][79] ~~~~~ screen[23][0] ~~ screen[23][79] ����
												// ���� �����͸� ���� ����

	fclose(fp);									// ���� �ݱ�
}

void clearscr()
{
	int i, j;

	for (i = 0; i < 24; i++)			// �� �̻��ϴ� �� 24������
	{
		for (j = 0; j < 80; j++)
		{
			currentXY(j, i);			// �̰� �� x, y �Ųٷ� �ְ� �־�
			printf(" ");
		}
	}
}

void apple_item(int ea)
{
	int i, j, x, y;

	apple = apple_data[ea];							// ���������� �°� ����� ������ ������
	for (i = 0; i < apple_data[ea]; i++)			// i �� 0���� ��� �������� i++
	{
		do											// �ϴ� �ض�
		{
			srand((unsigned)time(NULL));			// �õ尪�� ���� (1970�� 1�� 1�� ������ ����� �ð��� �� ������)(���� unsigned int)
			x = rand() % 80;						// 80���� ������ ���� �ؼ� 80 �ʰ��� ���� �� ����
			y = rand() % 24;						// 24�� ������ ���� �ؼ� 24 �ʰ��� ���� �� ����
		} while (screen[y][x] == '#' || screen[y][x] == '*' || screen[y][x] == '+' || screen[y][x] == '@');
													// ȭ�鿡 ��(#), �Ӹ�(*), ����(+), ���(@)�� �ƴ϶��...

		screen[y][x] = '@';							// y, x ��ġ�� ����� ����
	}												// �̰� ó���� �򰥸� �ǵ� x�� 24���� ����, y�� 80���� ���� �� �� �̷��� ����� ���� �򰥸���

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 80; j++)
		{
			if (screen[i][j] == '#' || screen[i][j] == '@')			// ȭ�鿡 ��(#), �Ǵ� ���(@) ���...
			{
				currentXY(j + 1, i + 1);							// (��ġ���ʰ�) ��ĭ�� �Űܼ� (��� �װ� �ƴѰ� ������?)
				printf("%c", screen[i][j]);							// �̰� �� ��ǥ�� ��ĭ�� �Űܼ� ������� �׳� �ص� �ɰ� ������ �̻��ϳ�
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

	if (kbhit())			// Ű���忡 �Է��� �ִٸ�...
	{
		key = getch();		// key �� �Է¹޾Ƽ� �����϶� (�ε�... �̰� kbhit(), key = getch() �� �ѹ��� ��?)

		switch (key)
		{
		case LEFT:		snake_attr.body_dx = -1;			// �̰� ���� �Ұ� �������� �����ϰ� ������������
						snake_attr.body_dy = 0; break;		// �����δ� ���� ���Կ� �Ұ� �ϴٴ� �� �� �����ؾ���

		case RIGHT:		snake_attr.body_dx = 1;
						snake_attr.body_dy = 0; break;

		case UP:		snake_attr.body_dy = -1;			// �̰� �� -1 �̾� up�ε� ���� ���� �� -1 ���� �𸣰ڴ�.
						snake_attr.body_dx = 0; break;

		case DOWN:		snake_attr.body_dy = 1;				// �̰� +1 �̰� �ƹ��� ����ġ�� �̰� ����?
						snake_attr.body_dx = 0; break;

		case ENTER:		printf("\n\n		Program aborted"); exit(0);		// exit(1) �̶� exit(0) ���̰� ���� (�޸��忡 �����)
		}
	}

	prev_x = snake_attr.body_x[snake_attr.cur_len - 1]; // �̰� �Ƹ��� �����̱� ���� ��ǥ�� �޾Ƴ��ߵǼ� ����ٰ� ���� ����...
	prev_y = snake_attr.body_y[snake_attr.cur_len - 1]; // �̰� ��ǥ���� -1 �� �ƴ϶� ���̿��� -1 �ε� �Ʒ� ���� ��ǥ���� �����־�

	for (i = snake_attr.org_len - 2; i >= 0; i--)			// �ִ� ���̺��� �� ������
	{
		snake_attr.body_x[i + 1] = snake_attr.body_x[i];	// �ٷ� �տ� �ִ°� �ڿ� �����ϴ� ������ ������
		snake_attr.body_y[i + 1] = snake_attr.body_y[i];	// �ٷ� �տ� �ִ°� �ڿ� �����ϴ� ������ ������
		// �ƴ� ���� �Ḹ �̰� <- �������� �����̸� ���� ���°� �Ƴ�?
		// �̰� �����Ϸ��� �Ӹ������� �׻� + �� �ν� �Ǿ� �ɰ� ������ (�׸���!)
		// �Ӹ������� �׻�[0][0] �̿��� �� �Ʒ� if�� ���ϱ� ���� �̰�

		// �׸��� �Ϸ簡 �귶��...���ϱ� �ƹ��� ����ġ �ε� �ϴ� �����ϸ�
		// snake_attr.body_x[41], snake_attr.body_y[41] �� snake[42] �� �ٸ��ٴ°�...
		// �̰ſ� ������ ����� �ɰ� ������
	
		// ó������ �״ϱ�... void initial(void) ���� �̰� ���鼭 ���� ������ ���߰� �����ϰ� �غôµ� ���� ������!!
		// �ϴ� ���⼭ snake_attr.body_x[i + 1] = snake_attr.body_x[i]; �̰Ŵ�
		// ���� �ű�°� �´µ� ���� �� ������, ����, ��, �Ʒ� �����̰� ���� �׻� ��(����) �ΰ� �ƴ��ݾ� �� ���ұ����ϴ� ����
		// �״ϱ� �̰� ��ǥ�� �����̰� �ִ°��� ���⼭ i + 1 = i �� ���� ������� ��ǥ�� ��ĭ�� ������ �ű�� �ž�
		// ���� �������ڸ� 10��° '+'�� �ٷξ��� 9��° '+'�� ��ǥ���� �޾Ƽ� ��ĭ�� �ű�°���
		// �׸��� �Ʒ������� ���⿡���� �Ӹ��� ��ǥ���� ������ or ���� or �� or �Ʒ��� ��ĭ�� �Ű��ִ°���
	}
	if (snake_attr.body_dx == 1)		// ���⼭ �ܼ��� ���� ������ ���⼺�� ������ ��
	{
		snake_attr.body_x[0]++;			// �Ӹ� ���������� ������!! (�Ḹ �̰� ���� �ݺ����� �س��� ���ٵ� �̻��ϳ�)
	}else 
	if (snake_attr.body_dx == -1)
	{
		snake_attr.body_x[0]--;
	}else
	if (snake_attr.body_dy == 1)
	{ 
		snake_attr.body_y[0]++;
	}else
	if (snake_attr.body_dy == -1)
	{
		snake_attr.body_y[0]--;
	}

	currentXY(prev_x, prev_y);		// ���� �̰� ���̿��� ���� ��ǥ�� �����ϸ� ���ϴ� ����� �ȳ��ð� ������
									// ��Ȯ�� ���� ��ǥ�� ���� �Ǵ� �� �´µ� [24],[80] �� �ƴ϶� [41],[41]�� ���� �ǰ� �ְ�
									// �̿� �� �Ÿ� [21(cur_len) -1] �� �ƴ϶� [0]���� �ؾ� ���� �ʰھ�?
									// �ֳĸ� ������ snake_attr.body_x[0]++; �̰� ���� ���ݾ� �ƴѰ�... �Ḹ...
									// �׷��� [21(cur_len) -1] �� �ƴ϶� [21(cur_len) +1] �� �ؼ� �ڿ� �� ���� ���� �ʳ�... �� ����...
	printf(" ");					// �̰� ������ ���ִ� ������ �����ָ� �����϶����� ���� ��ĭ�� ���̰� �ðŵ�

	if (snake_attr.body_x[0] >= 1 && snake_attr.body_x[0] <= 80 &&
		snake_attr.body_y[0] >= 1 && snake_attr.body_y[0] <= 24)		// ���� �Ӹ��� ȭ�� �ȿ� �ִ��� Ȯ���Ѵ�.
	{
		currentXY(snake_attr.body_x[0], snake_attr.body_y[0]);			// Ŀ���� ���� �Ӹ��� �ش��ϴ� ��ǥ�� ����Ų��.
		printf("%c", snake[0]);											// ���� �Ӹ��� ����Ѵ�.
										// �̰� �����ϴ� ������ ������ snake_attr.body_x[0]++ �̷����ؼ� �׷��� �ƴұ� ������...
										// �ƴѰ� �Ӹ��� ȭ������� �������� Ȯ���ؾ� �Ǽ� ���� ���� ������?
	}

	for (i = 1; i < snake_attr.cur_len; i++)						// ���� �Ӹ� �ٷ� �� ���� ������
	{
		currentXY(snake_attr.body_x[i], snake_attr.body_y[i]);		// Ŀ���� ���� ���뿡 �ش��ϴ� ���� ����Ų��.
		printf("%c", snake[i]);										// ���� ���� ���
	}
}

int decide(int no)
{
	char retry;
	int i;

	if (screen[snake_attr.body_y[0] - 1][snake_attr.body_x[0] - 1] == '@')	// �̰� ��ǥ ����� ���غôµ� �Ƹ��� ��������
																			// �Ӹ� �ٷ� �� ��ǥ�� ����� �ִ��� ���°� ����.
																			// �ٵ� �̰� Ȯ���� �� ���⼺ �ȵ����� �ڵ����� �ǳ�?
	{
		snake_attr.cur_len += 5;				// ��� �Ծ����� �� ���� �÷��ְ�
		apple--;								// ��� ���� ����
		if (apple == 0)							// ����� �� �Ծ����� ȣ�� �ߴ� �Լ��� ���ư�
			return 0;
	}

	for (i = 1; i < snake_attr.cur_len; i++)					// �Ӹ� �ٷ� �� ���� ������
	{
			if (snake_attr.body_x[0] == snake_attr.body_x[i] &&	
				snake_attr.body_y[0] == snake_attr.body_y[i])		// �Ӹ��� ���뿡 ������ �� (�ε����� ��)
			{
				life--;						// ������ �ϳ� ���
				if (life > 0)				// ������ �����ִٸ�...
				{
					read_map(no);			// ���������� �°� ���� �ҷ�����
					initial();				// �ٽ� �� �����ϰ� ����
				
					apple_item(no);			// ����� ���������� �°� ���ְ�	
					break;					// �̰� �� �ʿ���? ���ָ� ��� �Ǵµ�?
				}
			}
	}

	if (snake_attr.body_x[0] < 1 || snake_attr.body_x[0] > 80 ||
		snake_attr.body_y[0] < 1 || snake_attr.body_y[0] > 24 ||			// �Ӹ��� ȭ���� �������� Ȯ��...
		screen[snake_attr.body_y[0] - 1][snake_attr.body_x[0] - 1] == '#')	// �Ӹ��� ���� �ٷ� ������ �ִ��� Ȯ��...
		{
			life--;					// ������ ��� �ϳ��� �����Ѵٸ� ������ �ϳ� ��´�.
			if (life > 0)			// ������ ���� �ִٸ�...
			{
				read_map(no);		// ���������� �°� ���� �ҷ���
				initial();			// ������ ���� ( ���� ���� )
				apple_item(no);		// ���������� �°� ����� �д�.
			}
		}

	if (life == 0)						// ������ ���� ���� �ʴٸ�
	{
		currentXY(30, 12);				// 30, 12 ��ǥ�� Ŀ���� �ű��
		printf(" G A M E  O V E R !");	// ���ӿ����� ���

		currentXY(32, 15);				// 32, 15 ��ǥ�� Ŀ���� �ű��
		printf("retry ? (Y/N)");		// �� �Ұ����� ����� ���� ���
		scanf("%c", &retry);			// Yes �Ǵ� No �� �Է¹޴´�.

		if (toupper(retry) == 'Y')		// Yes ��� �Է� �޾Ҵٸ�... (toupper ���� �ҹ��ڸ� �빮�ڷ� �ٲ��ִ� �ɲ���...)
										// �ణ ������ ���� ������ �ִµ� ����� if (retry == 'y') �� ���ٵ� ���̾�...
			main();						// �ٽ��Ѵٰ� �ϸ� �ٽ� ó������ ������ �����ϱ� ���� main() ����
		else
			exit(0);					// ���Ѵٰ� �ϸ� ���α׷��� ������
	}

	return 1;							// ���������� ��ȯ
}

void currentXY(int x, int y)
{
	COORD Location;						// �̰� ������ ����ü ������ �ֳ�? �������� ������
	Location.X = x;						// �̰� �Ƹ��� ������ �ִ� ����ü �ϰž� ���� ���Ǹ� ���ص� �׷���
	Location.Y = y;						// ��ſ� �� ����ü�� windows.h�� �ֱ� ������ ������ �翬�� ������ ���� ������� 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Location);
	// �̰� ����� ���� ���Ƽ� �Ϻ��ϰ� �������� ���ϰڴµ� �� ������ �ǹ��ϴ� �ٴ�
	// SetConsoleCursorPosition �Լ���, �ܼ��� ��� �ڵ��� �ְ�, ��ġ�� �����ָ� Ŀ���� �̵��ϴ� ���̴�.
}