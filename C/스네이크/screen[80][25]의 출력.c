#include <Windows.h>
#include <stdio.h>
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

	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < 80; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	for (i = 0; i < 80; i++)
	{
		gotoxy(i, 0);
		printf("#");
	}

	printf("\n\n");

	return 0;
}