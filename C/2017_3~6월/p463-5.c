#include <stdio.h>

void gugu()
{
	static int dan = 2;
	static int i, k;

	for (i = dan; i <= 9; i++)
	{
	printf(" ** %d ´Ü **", dan);
	dan++;
	}

	printf("\n");

	for (i = 1; i <= 8; i++)
	{
		for (k = 2; k <= 9; k++)
		{
		printf(" %2d X %2d= %2d", k, i, i * k);
		}
		printf("\n");
	}
}

int main()
{
	int i;

		gugu();
}