// snake.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

//#include "stdafx.h"


#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define MAX 41

/*		키 정의 */
/*
#define RIGHT '6'
#define LEFT '4'
#define DOWN '2'
#define UP '8'
#define END '0'
*/
#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80
#define ENTER 13


char snake[42]="*++++++++++++++++++++++++++++";

/*		스네이크 구조체		*/
struct snake_internal
{
	int body_x[41], body_y[41];
	int body_dx, body_dy;
	int cur_len, org_len;
} snake_attr;


char screen[24][80];
char life;
int apple;
char apple_data[6] = {2, 3, 3, 4, 5, 5};


void timing(void);
void initial(void);
void read_map(int no);

void clearscr(void);
void apple_item(int ea);
void select_direction(void);
int decide(int no);
void currentXY(int x, int y);

void main(void)
{
	int i;

	life = 3;

	for(i=0; i<6; i++)
	{
		if(i==2||i==4) life++;
		read_map(i);
		initial();
		apple_item(i);
		do
		{
			timing();
			select_direction();
		}while(decide(i));
		printf ("nextlevel : %d\n", i);
		getchar();
	}
	currentXY(30, 12);
	printf(" Congratuation !!");
	getchar();
}

void timing(void)
{
	DWORD				thisTickCount;
	static DWORD		lastTickCount = 0;
	DWORD				delay = 300;

	/*		클럭 틱을 얻어온다 */
	thisTickCount = GetTickCount();

	while(1)
	{
		/*	클럭 틱의 횟수를 비교한다 */
		if((thisTickCount - lastTickCount) > delay)
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

	/*		스네이크 초기위치 설정및 출력		*/
	for(i=0; i <snake_attr.org_len; i++)
	{
		snake_attr.body_x[i] = snake_attr.org_len+1-i;
		snake_attr.body_y[i] = 5;
	}
	for(i=0; i < snake_attr.cur_len; i++)
	{
		currentXY(snake_attr.org_len+1-i, 5);
		printf("%c", snake[i]);
	}

	snake_attr.body_dx=1;
	snake_attr.body_dy=0;
}

void read_map(int no)
{
	FILE *fp;
	char filename[27];
	char number[1];
	int i, j;

	for(i=0; i<24; i++)
		for(j=0; j<80; j++)
			screen[i][j]=NULL;


		clearscr();

		/*		맵 데이터 읽어오기		*/
		strcpy(filename, "d:\\game_map\\snake");
		strcat(filename, itoa(no, number, 10));
		strcat(filename, ".txt");

		fp=fopen(filename,"rt");
		if(fp==NULL)
		{
			currentXY(30, 12);
			printf("Cannot open input file. \n");
			getchar();
			exit(1);
		}

		for(i=0; i<24; i++)
			fgets(screen[i], 80, fp);

		fclose(fp);
}

void clearscr()
{

	int i, j;

	for(i=0; i<24; i++) {
		for(j=0; j<80; j++)
		{
			currentXY(j, i);
			printf(" ");

		}
	}

}

void apple_item(int ea)
{
	int i, j, x, y;

	/*		사과 아이템 만들기		*/
	apple = apple_data[ea];
	for(i=0; i<apple_data[ea]; i++)
	{
		do{
			srand( (unsigned)time( NULL ) );
			x = rand() % 80;
			y = rand() % 24;
		}while(screen[y][x]=='#'||screen[y][x]=='*'||screen[y][x]=='+'||screen[y][x]=='@');

		screen[y][x]='@';

	}

	for(i=0; i<24; i++)
	{   
		for(j=0; j<80; j++) {  
			if(screen[i][j]=='#'||screen[i][j]=='@')
			{
				currentXY(j+1, i+1);
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

	/*		스네이크의 방향 (좌, 우, 상, 하) 선택		*/
	
	if(kbhit())
	{	 	
		key=getch();

		switch(key)
		{
			case LEFT:		snake_attr.body_dx = -1;
							snake_attr.body_dy = 0;

							break;
			case RIGHT :	snake_attr.body_dx = 1;
							snake_attr.body_dy = 0;

							break;
			case UP:		snake_attr.body_dy = -1;
							snake_attr.body_dx = 0;

							break;
			case DOWN:		snake_attr.body_dy = 1;
							snake_attr.body_dx = 0;

							break;
			case ENTER:		printf("\n\n		Program aborted");
								exit(0);
		}

	}

	/*           스네이크 이동            */
    prev_x = snake_attr.body_x[snake_attr.cur_len-1];
    prev_y = snake_attr.body_y[snake_attr.cur_len-1]; 
    for(i=snake_attr.org_len-2; i>=0; i--)
    {
              snake_attr.body_x[i+1] = snake_attr.body_x[i];
              snake_attr.body_y[i+1] = snake_attr.body_y[i];
    }
    if(snake_attr.body_dx==1) {
               snake_attr.body_x[0]++;
    }else
    if(snake_attr.body_dx==-1)
                snake_attr.body_x[0]--;
    else
    if(snake_attr.body_dy==1)
                snake_attr.body_y[0]++;
    else
    if(snake_attr.body_dy==-1)
                snake_attr.body_y[0]--;
            

    /*            스네이크 몸체 출력        */

    currentXY(prev_x, prev_y);
    printf(" ");
    
    if(snake_attr.body_x[0] >= 1 && snake_attr.body_x[0] <= 80 &&
       snake_attr.body_y[0] >= 1 && snake_attr.body_y[0] <= 24)
    {

		currentXY(snake_attr.body_x[0], snake_attr.body_y[0]);
                printf("%c", snake[0]);
    }
    
    for(i=1; i < snake_attr.cur_len; i++)
    {
             currentXY(snake_attr.body_x[i], snake_attr.body_y[i]);
             printf("%c", snake[i]);
    }
}

int decide(int no)
{
    char retry;
    int i;
    
    /*   사고아이템을 먹었는지의 체크   */ 
    if(screen[snake_attr.body_y[0]-1][snake_attr.body_x[0]-1]=='@')
    {
             snake_attr.cur_len += 5;
             apple--;
             if(apple==0)
                  return 0;
    }
    
    /*   스네이크의 머리와 뭄체가 충돌하였는지의 체크   */
    for(i=1; i < snake_attr.cur_len; i++)
    {
             if(snake_attr.body_x[0]==snake_attr.body_x[i] &&
                snake_attr.body_y[0]==snake_attr.body_y[i])
             { 


                 life--;
                 if(life > 0)
                 {
                         read_map(no);
                         initial();

                         apple_item(no);
                         break;
                  }
             }
    }
    
    /*   상하좌우 경계 벽 또는 장애물과 충돌 체크   */
    if(snake_attr.body_x[0] < 1 || snake_attr.body_x[0] > 80 ||
       snake_attr.body_y[0] < 1 || snake_attr.body_y[0] > 24 ||
       screen[snake_attr.body_y[0]-1][snake_attr.body_x[0]-1]=='#')
       {

           life--;
           if(life > 0)
           {
                   read_map(no);
                   initial();
                   apple_item(no);
           }
        }
        
    /*   스네이크 생명 소멸로 다시 게임할지의 체크   */
    if(life==0)
    {
               currentXY(30, 12);
               printf(" G A M E  O V E R !");
               currentXY(32, 15);
               printf("retry ? (Y/N)"); 
               scanf("%c", &retry);
               if(toupper(retry) == 'Y') main();
               else                      exit(0);
    }
    
    return 1;
}

void currentXY(int x, int y)
{
     COORD Location;
     Location.X=x;
     Location.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Location);
}
