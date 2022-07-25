#include <stdio.h>

int main()
{
	int num[3][4];
	int re_1, re_2;

	int val = 1;

	for (re_1 = 0; re_1 < 3; re_1++)
	{
		for (re_2 = 0; re_2 < 4; re_2++)
		{
			num[re_1][re_2] = val;
			val++;
		}
	}

	printf("num[0][0]부터 num[2][3] 까지 출력 \n");

	for (re_1 = 0; re_1 < 3; re_1++)
	{
		for (re_2 = 0; re_2 < 4; re_2++)
		{
			printf("%3d", num[re_1][re_2]);
		}
		printf("\n");
	}
}