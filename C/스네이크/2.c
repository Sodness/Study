#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>

#pragma warning(disable:4996)
#define MAX 41

/*
#define RIGHT	'6'		// 문자? 왜 굳이? 아스키 코드면 정수로 해도 되지 않나?
#define LEFT	'4'
#define DOWN	'2'
#define UP		'8'
#define END		'0'
*/						//아 이게 있네

// 키 정의 //
#define LEFT	75
#define RIGHT	77
#define UP		72
#define DOWN	80
#define ENTER	13

char snake[42] = "*++++++++++++++++++++++++++++";

// 스네이크 구조체 //
struct snake_internal
{
	int body_x[41], body_y[41];
	int body_dx, body_dy;
	int cur_len, org_len;		//org_len에서 org 이거 뜻이 뭘까?
} snake_attr;

char screen[25][80];			// 이거 왜 [80][25] 아니냐?
char life;						// 생명을 문자로? 정수가 아니라?
int apple;
char apple_data[6] = { 2, 3, 3, 4, 5, 5 };

void timing(void);				// 클락틱?
void initial(void);				// 음... 화면의 초기화, 뱀의 생성, 사과의 생성 등등?
void read_map(int no);			// 이건 쉽다 맵 읽어와서 출력
								
								// 이쪽은 게임을 하기 위한 핵심 함수
								// 여기 줄 왜 비우는 거야 함수들의 기능에 무슨 차이가 있나?
								// 이쪽은 게임 내의 기능

void clearscr(void);			// 화면의 초기화
void apple_item(int ea);		// 이건 뭐야 아... 사과의 무작위 생성
void select_direction(void);	// 방향키의 입력에 따른 방향 전환
int decide(int no);				// 유일하게 반환값이 있는 함수 이건 어따가 쓸려나 음... 다시하기?
void currentXY(int x, int y);	// 좌표의 반환

void main(void)
{
	int i;

	life = 3;						// 생명 3을 준다.

	for (i = 0; i < 6; i++)			// 맵이 6개 있음
	{
		if (i == 2 || i == 4)		// 스테이지 2, 4 마다 생명을 하나 더 줌
			life++;

		read_map(i);				// 스테이지에 맞게 맵을 불러옴
		initial();					// 뱀의 생성 (이거 지금 잘 보니까 스테이지 넘어가면 뱀 길이 초기화 되네)
		apple_item(i);				// 스테이지에 맞게 사과를 둠

		do
		{
			timing();				// 이거 왜 있는거지? 보니까 예상한대로 틱..틱...틱.. 이거네
									// 이거 지우면 뱀이 엄청난 속도로 벽에다가 들이받음 
									// 쉽게 말하자면 단순계산으로 조건을 만족할 때까지 해서 시간을 끄는거지 
			select_direction();		// 이걸로 방향전환 확인하면서 뱀 움직이고
		} while (decide(i));		// 벽, 몸통, 사과 이런거 부딪치거나 먹었는지 확인하고

		printf("nextlevel : %d \n", i);		// 사과가 없어서 while(0)이 되면 nextlevel 출력함
		getchar();							// 바로 가지않고 입력받을 때 까지 한번 쉬고 다시 위로 ㄱㄱ
	}
}

void timing(void)
{
	DWORD				thisTickCount;			// typedef unsigned long DWORD (DWORD의 뜻은 뭘까?)
	static DWORD		lastTickCount = 0;		// 왜 0을 대입했을까?
	DWORD				delay = 300;			// delay를 크게하면 뱀의 속도가 올라가는 건가?
												// delay로 장난좀 쳐봤는데 낮추면 (속도가 빨라짐, 키보드에 대항 반응이 빠름)
												//						   높이면 (속도가 느려짐, 키보드에 대항 반등이 느림)

	// 클럭 틱을 얻어온다 //
	thisTickCount = GetTickCount();				// 이건 그... 1970년 1월 1일 이후의 경과된 시간을 초 단위로 변환한 값 인가?
												// 노놉 메모장에 적어놨는데 간단히 말하자면 함수의 경과 시간을 잴 때 사용함
												// GetTickCount()의 반환값을 'DWORD' 라고 거의 확신하고 있음.

	while (1)
	{
		// 클럭 틱의 획수를 비교한다 //
		if ((thisTickCount - lastTickCount) > delay) // 이거 if를 만족할 수 없는데? (음수) > delay 인데?
													 // 아 lastTickCount가 0이네... 그럼 무조건 만족인데?
													 // 아니 0인데 애초에 왜 빼는거야?

			// 아..!! 알겠다 처음 빼면 2000 - 0 이런 식이잖아?
			// 당연히 300보다 크지? 아닌가.... 여튼 그래서 lastTickCount = 2000 넣고 반환하고 
			// do{}while(); 이니까 조건 안에서는 계속 오잖아? 그럼 두번째를 보자고 이번엔 대충 한... 2050 - 2000 이렇게 되겠지?
			// 그럼 300 안넘잖아 그래서 2070...2100..2200...2301 이런식으로 가잖아 아래 thisTickCount = GetTickCount(); 이거 있으니까
			// 그럼 또 300 넘지? 그러면 다시 반환하고 그런거지 
			// 뱀이 틱...틱... 이러는게 void timing(void) 내에서 이러한 단순 계산으로 만족할 때 까지 반복하니까 중간에 끊기는 거지
			// 그러니까 delay 값을 낮추면 계산시간이 줄어드니까 뱀이 더 빠르게 틱.틱.틱 이런식으로 가는거지
			// 키보드는 어떻게 된걸까? 내 생간엔... 봐바 키보드 눌렀어 뙇 그럼 이제 void select_direction(void) 얘는
			// 언릉 방향을 바꿔야겠는데 void timing(void) 얘가 아직 계산중이니까 방향전환이 느려지는거지 main함수에서
			// timing이 select_direction 보다 위에 있잖아.
		{
			lastTickCount = thisTickCount;			 // lastTickCount = thisTickCount; 니까 나중엔 0이 아니라 다른 수를 빼겠지만 (아마도)
			return;									 // return? 이거 한번하자고 while(1)을 정의했어?
		}

		thisTickCount = GetTickCount();				 // 이거 애초에 해당 할 수 있어?
	}
}

void initial(void)
{
	int i;
	
	snake_attr.org_len = 41;									// 뱀의 최대 길이
	snake_attr.cur_len = 21;									// 뱀의 현재 길이

	for (i = 0; i < snake_attr.org_len; i++)					// i 는 0부터 40까지 i++ (이 for문은 두번 봐도 왜 있는지 모르겠다.)
	{
		snake_attr.body_x[i] = snake_attr.org_len + 1 - i;		// snake_attr.body_x[0] = 42 ~~ snake_attr.body_x[40] = 2
		snake_attr.body_y[i] = 5;								// snake_attr.body_y[0] = 5  ~~ snake_attr.body_y[40] = 5
	}															// 처음에 헷갈렸던 건데 2차 배열이 아니라 1차 배열이라는 점...

	for (i = 0; i < snake_attr.cur_len; i++)					// i 는 0부터 20까지 i++ (이건 보면 왜 있는지 알겠는데)
	{
		currentXY(snake_attr.org_len + 1 - i, 5);				// currentXY(42, 5) ~~ currentXY(22, 5) -> (현재길이가 21일때)
		printf("%c", snake[i]);									// 뱀을 출력
	}

	snake_attr.body_dx = 1;										// 오른쪽 방향으로 ㄱㄱ
	snake_attr.body_dy = 0;										// 위, 아래 방향 전환은 없음...
															// 이라고! 생각만 하고 있는거지 현재 상황으로는 그냥 값의 대입에 불과함..
}

void read_map(int no)
{
	FILE *fp;
	char filename[50];
	char number[1];
	int i, j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 80; j++)				// 이거 2줄 짜리같은데 중괄호로 안묶어도 되네?
			screen[i][j] = NULL;

	clearscr();									// 위에서 NULL로 초기화 한거 아닌가? 이 함수는 뭐하는데 쓰는거야

	strcpy(filename, "d:\\자료\\컴퓨터 프로그래밍\\스네이크\\2\\map");				// 맵의 경로를 filename에 복사
	strcat(filename, itoa(no, number, 10));		// no(몇 스테이지 인지)(정수) 를 10진수인 문자열로 변환 후 number에 저장 후
												// filename 에 이어붙임
	strcat(filename, ".txt");					// 마지막에 .txt 를 이어붙임 (1스테이지 맵이라면 -> d:\\...1.txt)

	fp = fopen(filename, "rt");					// 위에서 만든 filename 경로를 따라 rt(텍스트 읽기)로 열어서 fp에 저장
	if (fp == NULL)								// 어떠한 오류로 인해 맵이 읽어서 저장 되지 않았다면
	{
		currentXY(30, 12);						// 30, 12 위치에
		printf("Cannot open input file. \n");	// Cannot open input file. 출력
		getchar();								// 자동으로 꺼지지 않고 입력을 받을 때 까지 기다림
		exit(1);								// 입력을 받은 후 프로그램 종료
	}

	for (i = 0; i < 24; i++)					// 0부터 23까지 i++
		fgets(screen[i], 80, fp);				// screen[0][0]  ~~ screen[0][79] ~~~~~ screen[23][0] ~~ screen[23][79] 까지
												// 맵의 데이터를 각각 저장

	fclose(fp);									// 파일 닫기
}

void clearscr()
{
	int i, j;

	for (i = 0; i < 24; i++)			// 얼레 이상하다 왜 24까지냐
	{
		for (j = 0; j < 80; j++)
		{
			currentXY(j, i);			// 이건 왜 x, y 거꾸로 넣고 있어
			printf(" ");
		}
	}
}

void apple_item(int ea)
{
	int i, j, x, y;

	apple = apple_data[ea];							// 스테이지에 맞게 사과의 갯수를 저장함
	for (i = 0; i < apple_data[ea]; i++)			// i 는 0부터 사과 갯수까지 i++
	{
		do											// 일단 해라
		{
			srand((unsigned)time(NULL));			// 시드값을 정함 (1970년 1월 1일 이후의 경과된 시간을 초 단위로)(인자 unsigned int)
			x = rand() % 80;						// 80으로 나머지 값을 해서 80 초과가 나올 수 없음
			y = rand() % 24;						// 24로 나머지 값을 해서 24 초과가 나올 수 없음
		} while (screen[y][x] == '#' || screen[y][x] == '*' || screen[y][x] == '+' || screen[y][x] == '@');
													// 화면에 벽(#), 머리(*), 몸통(+), 사과(@)가 아니라면...

		screen[y][x] = '@';							// y, x 위치에 사과를 저장
	}												// 이거 처음에 헷갈린 건데 x가 24으로 세로, y가 80으로 가로 임 왜 이렇게 만들어 놨어 헷갈리게

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 80; j++)
		{
			if (screen[i][j] == '#' || screen[i][j] == '@')			// 화면에 벽(#), 또는 사과(@) 라면...
			{
				currentXY(j + 1, i + 1);							// (겹치지않게) 한칸씩 옮겨서 (잠깐만 그게 아닌거 같은데?)
				printf("%c", screen[i][j]);							// 이거 왜 좌표를 한칸씩 옮겨서 출력하지 그냥 해도 될거 같은데 이상하네
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

	if (kbhit())			// 키보드에 입력이 있다면...
	{
		key = getch();		// key 에 입력받아서 저장하라 (인데... 이거 kbhit(), key = getch() 가 한번에 됨?)

		switch (key)
		{
		case LEFT:		snake_attr.body_dx = -1;			// 이거 주의 할게 방향으로 생각하고 대입중이지만
						snake_attr.body_dy = 0; break;		// 실제로는 값의 대입에 불과 하다는 거 꼭 주의해야함

		case RIGHT:		snake_attr.body_dx = 1;
						snake_attr.body_dy = 0; break;

		case UP:		snake_attr.body_dy = -1;			// 이건 왜 -1 이야 up인데 ㅈㄹ 났네 왜 -1 인지 모르겠다.
						snake_attr.body_dx = 0; break;

		case DOWN:		snake_attr.body_dy = 1;				// 이건 +1 이고 아무말 대잔치냐 이거 뭐야?
						snake_attr.body_dx = 0; break;

		case ENTER:		printf("\n\n		Program aborted"); exit(0);		// exit(1) 이랑 exit(0) 차이가 뭐지 (메모장에 써놓음)
		}
	}

	prev_x = snake_attr.body_x[snake_attr.cur_len - 1]; // 이거 아마도 움직이기 전의 좌표를 받아놔야되서 여기다가 써논거 같다...
	prev_y = snake_attr.body_y[snake_attr.cur_len - 1]; // 이거 좌표에서 -1 이 아니라 길이에서 -1 인데 아래 보면 좌표에서 쓰고있어

	for (i = snake_attr.org_len - 2; i >= 0; i--)			// 최대 길이부터 쭉 내려옴
	{
		snake_attr.body_x[i + 1] = snake_attr.body_x[i];	// 바로 앞에 있는걸 뒤에 저장하는 식으로 내려옴
		snake_attr.body_y[i + 1] = snake_attr.body_y[i];	// 바로 앞에 있는걸 뒤에 저장하는 식으로 내려옴
		// 아니 ㅅㅂ 잠만 이거 <- 이쪽으로 움직이면 쓸모 없는거 아녀?
		// 이거 성립하려면 머리방향이 항상 + 로 인식 되야 될거 같은데 (그리고!)
		// 머리방향은 항상[0][0] 이여야 함 아래 if문 보니까 뭐야 이거

		// 그리고 하루가 흘렀다...보니까 아무말 대잔치 인데 일단 정리하면
		// snake_attr.body_x[41], snake_attr.body_y[41] 와 snake[42] 는 다르다는거...
		// 이거에 초점을 맞춰야 될거 같은데
	
		// 처음부터 그니까... void initial(void) 보고 이거 보면서 수를 일일이 맞추고 대입하고 해봤는데 드디어 이해함!!
		// 일단 여기서 snake_attr.body_x[i + 1] = snake_attr.body_x[i]; 이거는
		// 뱀을 옮기는게 맞는데 봐봐 그 오른쪽, 왼쪽, 위, 아래 움직이고 뱀이 항상 ㅡ(일자) 인게 아니잖아 막 구불구불하단 말야
		// 그니까 이걸 좌표로 움직이고 있는거지 여기서 i + 1 = i 는 뱀의 몸통들의 좌표를 한칸씩 앞으로 옮기는 거야
		// 쉽게 설명하자면 10번째 '+'를 바로앞인 9번째 '+'의 좌표값을 받아서 한칸씩 옮기는거지
		// 그리고 아래에서는 방향에따라서 머리의 좌표값을 오른쪽 or 왼쪽 or 위 or 아래로 한칸만 옮겨주는거지
	}
	if (snake_attr.body_dx == 1)		// 여기서 단순한 값의 대입이 방향성을 가지게 됨
	{
		snake_attr.body_x[0]++;			// 머리 오른쪽으로 움직여!! (잠만 이거 무한 반복으로 해놔야 될텐데 이상하네)
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

	currentXY(prev_x, prev_y);		// 여봐 이거 길이에서 뺀건 좌표에 대입하면 원하는 결과가 안나올거 같은데
									// 정확히 보면 좌표가 전달 되는 건 맞는데 [24],[80] 이 아니라 [41],[41]이 전달 되고 있고
									// 이왕 할 거면 [21(cur_len) -1] 이 아니라 [0]으로 해야 되지 않겠어?
									// 왜냐면 위에서 snake_attr.body_x[0]++; 이거 쓰고 있잖아 아닌가... 잠만...
									// 그러면 [21(cur_len) -1] 이 아니라 [21(cur_len) +1] 로 해서 뒤에 껄 빼야 되지 않나... 아 ㅅㅂ...
	printf(" ");					// 이게 공백을 해주는 이유가 안해주면 움직일때마다 뱀이 한칸씩 길이가 늘거든

	if (snake_attr.body_x[0] >= 1 && snake_attr.body_x[0] <= 80 &&
		snake_attr.body_y[0] >= 1 && snake_attr.body_y[0] <= 24)		// 뱀의 머리가 화면 안에 있는지 확인한다.
	{
		currentXY(snake_attr.body_x[0], snake_attr.body_y[0]);			// 커서로 뱀의 머리에 해당하는 좌표를 가리킨다.
		printf("%c", snake[0]);											// 뱀의 머리를 출력한다.
										// 이거 따로하는 이유는 위에서 snake_attr.body_x[0]++ 이런거해서 그런게 아닐까 싶은데...
										// 아닌가 머리가 화면밖으로 나갔는지 확인해야 되서 따로 뺀거 같은데?
	}

	for (i = 1; i < snake_attr.cur_len; i++)						// 뱀의 머리 바로 뒤 부터 끝까지
	{
		currentXY(snake_attr.body_x[i], snake_attr.body_y[i]);		// 커서로 뱀의 몸통에 해당하는 곳을 가리킨다.
		printf("%c", snake[i]);										// 뱀의 몸통 출력
	}
}

int decide(int no)
{
	char retry;
	int i;

	if (screen[snake_attr.body_y[0] - 1][snake_attr.body_x[0] - 1] == '@')	// 이거 좌표 계산은 안해봤는데 아마도 보나마나
																			// 머리 바로 앞 좌표에 사과가 있는지 보는거 같다.
																			// 근데 이거 확인할 때 방향성 안따져도 자동으로 되나?
	{
		snake_attr.cur_len += 5;				// 사과 먹었으면 몸 길이 늘려주고
		apple--;								// 사과 갯수 빼고
		if (apple == 0)							// 사과를 다 먹었으면 호출 했던 함수로 돌아감
			return 0;
	}

	for (i = 1; i < snake_attr.cur_len; i++)					// 머리 바로 뒤 부터 끝까지
	{
			if (snake_attr.body_x[0] == snake_attr.body_x[i] &&	
				snake_attr.body_y[0] == snake_attr.body_y[i])		// 머리가 몸통에 겹쳤을 때 (부딪쳤을 때)
			{
				life--;						// 생명을 하나 깎고
				if (life > 0)				// 생명이 남아있다면...
				{
					read_map(no);			// 스테이지에 맞게 맵을 불러오고
					initial();				// 다시 뱀 생성하고 시작
				
					apple_item(no);			// 사과도 스테이지에 맞게 놔주고	
					break;					// 이거 꼭 필요함? 없애면 어떻게 되는데?
				}
			}
	}

	if (snake_attr.body_x[0] < 1 || snake_attr.body_x[0] > 80 ||
		snake_attr.body_y[0] < 1 || snake_attr.body_y[0] > 24 ||			// 머리가 화면을 나갔는지 확인...
		screen[snake_attr.body_y[0] - 1][snake_attr.body_x[0] - 1] == '#')	// 머리가 벽에 바로 직전에 있는지 확인...
		{
			life--;					// 위에서 어느 하나라도 만족한다면 생명을 하나 깎는다.
			if (life > 0)			// 생명이 남아 있다면...
			{
				read_map(no);		// 스테이지에 맞게 맵을 불러옴
				initial();			// 게임의 시작 ( 뱀의 생성 )
				apple_item(no);		// 스테이지에 맞게 사과를 둔다.
			}
		}

	if (life == 0)						// 생명이 남아 있지 않다면
	{
		currentXY(30, 12);				// 30, 12 좌표에 커서를 옮기고
		printf(" G A M E  O V E R !");	// 게임오버를 출력

		currentXY(32, 15);				// 32, 15 좌표에 커서를 옮기고
		printf("retry ? (Y/N)");		// 또 할것인지 물어보는 문장 출력
		scanf("%c", &retry);			// Yes 또는 No 를 입력받는다.

		if (toupper(retry) == 'Y')		// Yes 라고 입력 받았다면... (toupper 저거 소문자를 대문자로 바꿔주는 걸꺼야...)
										// 약간 억지로 넣은 느낌이 있는데 나라면 if (retry == 'y') 로 할텐데 말이야...
			main();						// 다시한다고 하면 다시 처음부터 게임을 시작하기 위해 main() 실행
		else
			exit(0);					// 안한다고 하면 프로그램을 종료함
	}

	return 1;							// 비정상적인 반환
}

void currentXY(int x, int y)
{
	COORD Location;						// 이거 위에서 구조체 만든적 있나? 없었던거 같은데
	Location.X = x;						// 이게 아마도 기존에 있는 구조체 일거야 따로 정의를 안해도 그렇네
	Location.Y = y;						// 대신에 이 구조체가 windows.h에 있기 때문에 쓰려면 당연히 위에서 정의 해줘야함 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Location);
	// 이게 어려운 말이 많아서 완벽하게 이해하진 못하겠는데 이 한줄이 의미하는 바는
	// SetConsoleCursorPosition 함수에, 콘솔의 출력 핸들을 주고, 위치를 정해주면 커서가 이동하는 것이다.
}