#include <stdio.h>

int main()
{
	int num[3][4] = {
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12}
	};

	int re_1, re_2;
	printf("num[0][0]���� num[2][3]���� ��� \n\n");

	for (re_1 = 0; re_1 < 3; re_1++)
	{
		for (re_2 = 0; re_2 < 4; re_2++)
		{
			printf("%3d", num[re_1][re_2]);
		}
		printf("\n");
	}
	printf("\n");
}