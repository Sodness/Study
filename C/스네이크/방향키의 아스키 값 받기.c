#include <stdio.h>
#include <conio.h>

#pragma warning(disalbe:4996)

int main(void)
{
	int key = 0;

	printf("�Է� ==> \n\n");

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
				case 75: printf("�� key : %d \n\n", key); break;
				case 77: printf("�� key : %d \n\n", key); break;
				case 72: printf("�� key : %d \n\n", key); break;
				case 80: printf("�� key : %d \n\n", key); break;
				case 13: printf("���α׷� ���� key : %d \n\n", key);
					_getch(); return 0;
				}
			}
	}
}