#include <stdio.h>

int main()
{
	int re_1, re_2 ;
	int sum = 0;

	for (re_1 = 2; re_1 <= 9; re_1++)
	{
		for (re_2 = 1; re_2 <= 9; re_2++)
		{
			sum = re_1 * re_2;
			printf("%d X %d = %d \n", re_1, re_2, sum);
		}
		if (re_2 == 10)
			printf("\n");
		//OR
			//printf("\n");
		}
	printf("\n");
}