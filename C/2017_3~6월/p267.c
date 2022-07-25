#include <stdio.h>

int main()
{
	
	int re_1, re_2;

	for (re_1 = 1; re_1 <= 9; re_1++)
	{
		for (re_2 = 1; re_2 <= 9; re_2++)
		{
			printf("%dX%d = %2d ", re_2, re_1, re_2 * re_1);
		}
		printf("\n");
	}
}