#include <stdio.h>

int main()
{
	int a = 0x41, b = 0x61;

	int to1;

	to1 = b - a;
	
	printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K' + to1);
	printf("%c를 대문자로 표시하면 %c이며 \n", 'z', 'z' - to1);
}