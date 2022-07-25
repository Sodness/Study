#include <stdio.h>

int main()
{
	int num[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
	int re_1, re_2;
	int tmp;
	int *p;

	p = num;

	printf("정렬 전 배열 num ==> ");
	for (re_1 = 0; re_1 < 10; re_1++)
	{
		printf("%d ", num[re_1]);
	}

	for (re_1 = 0; re_1 < 9; re_1++)
	{
		for (re_2 = re_1 + 1; re_2 < 10; re_2++)
		{
			if (num[re_1] < num[re_2])
				tmp = num[re_1];
			else
			{
				tmp = num[re_2];
				num[re_2] = num[re_1];
				num[re_1] = tmp;
			}
		}
	}

	printf("\n정렬 후 배열 num ==> ");
	for (re_1 = 0; re_1 < 10; re_1++)
		printf("%d ", num[re_1]);

	printf("\n\n");
}