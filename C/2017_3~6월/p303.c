#include <stdio.h>

int main()
{
	int num_1[10] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	int re_1, re_2;
	int tmp;

	int *p;

	p = num_1;

	printf("정렬 전 배열 num_1 ==> ");
	for (re_1 = 0; re_1 < 10; re_1++)
		printf(" %d", *(p + re_1));

	printf("\n");

	for (re_1 = 0; re_1 < 9; re_1++)
	{
		for (re_2 = re_1 + 1; re_2 < 10; re_2++)
		{
			if (*(p + re_1) > *(p + re_2))
			{
				tmp = *(p + re_1);
				*(p + re_1) = *(p + re_2);
				*(p + re_2) = tmp;
			}
		}
	}

	printf("정렬 후 배열 num_1 ==> ");
	for (re_1 = 0; re_1 < 10; re_1++)
		printf(" %d", *(p + re_1));

	printf("\n\n");
}