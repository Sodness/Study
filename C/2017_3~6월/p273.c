#include <stdio.h>

int main()
{
	int aa[3][4];

	int i, k;
	int val = 1;

	i = 0;
	while (i < 3)
	{
		k = 0;
		while (k < 4)
		{
			aa[i][k] = val;
			val++;

			k++;
		}
		i++;
	}

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
			printf("%d \t", aa[i][k]);

		printf("\n");
	}
	printf("\n\n");
}