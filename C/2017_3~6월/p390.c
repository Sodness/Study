#include <stdio.h>

void main()
{
	int re;
	char ary[3][100];

	for (re = 0; re < 3; re++)
	{
		printf(" %d ��° ���ڿ� : ", re + 1);
		gets_s(ary[re], 99);
	}
	printf("\n");

	printf(" -- �Է°� �ݴ�� ���<������ �迭> --\n");

	for (re = 2; re >= 0; re--)
	{
		printf(" %d :", re + 1);
		puts(ary[re]);
	}

	printf("\n\n");
}