#include <stdio.h>

void gugu()
{
	static int dan = 1;
	int i;

	dan++;

	printf("\n\n ** %d �� **\n", dan);
	for (i = 1; i <= 9; i++)
	{
		printf("%2d X %2d= %2d \n", dan, i, dan * i);
	}
}

int main()
{
	int i;

	for (i = 0; i < 8; i++)
		gugu();
}