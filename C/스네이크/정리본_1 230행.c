#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
	COORD Location;
	Location.X = x;
	Location.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Location);
}

int main(void)
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			gotoxy(j, i);
			printf("@");
		}
	}

	gotoxy(1,2);
	printf("2");

	printf("\n\n");
}