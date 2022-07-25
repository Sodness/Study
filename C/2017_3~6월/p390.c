#include <stdio.h>

void main()
{
	int re;
	char ary[3][100];

	for (re = 0; re < 3; re++)
	{
		printf(" %d 번째 문자열 : ", re + 1);
		gets_s(ary[re], 99);
	}
	printf("\n");

	printf(" -- 입력과 반대로 출력<이차원 배열> --\n");

	for (re = 2; re >= 0; re--)
	{
		printf(" %d :", re + 1);
		puts(ary[re]);
	}

	printf("\n\n");
}