#include <stdio.h>

int main()
{
	int num[10];
	int re_1, re_2;
	int tmp;

	int *p;

	p = num;

	for (re_1 = 0; re_1 < 10; re_1++)
	{
		printf("num[%d] ������: ", re_1);
		scanf_s("%d", &*(p + re_1));
	}

	printf("\n");

	printf("���� �� �迭 num ==> ");
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

	printf("���� �� �迭 num ==> ");
	for (re_1 = 0; re_1 < 10; re_1++)
		printf(" %d", *(p + re_1));

	printf("\n\n");
}