#include <stdio.h>
#include <conio.h>

#pragma warning(disalbe:4996)

int main(void)
{
	int key = 0;

	printf("입력 ==> \n\n");

	while (1)
	{
			if (_kbhit())
			{	
				key = _getch();

				for (int i = 1; i < 4; i++)
				{
					printf("key == %d, i == %d \n", key, i);
				}

				printf("\n");

				switch (key)
				{
				case 75: printf("좌 key : %d \n\n", key); break;
				case 77: printf("우 key : %d \n\n", key); break;
				case 72: printf("상 key : %d \n\n", key); break;
				case 80: printf("하 key : %d \n\n", key); break;
				case 13: printf("프로그램 종료 key : %d \n\n", key);
					_getch(); return 0;
				}
			}
	}
}