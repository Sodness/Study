#include <stdio.h>

int main()
{
	int ary[10];
	int hap = 0;
	int re;

	re = 0;
	while (re < 10)
	{
		printf("%d번째 숫자를 입력하세요 : ", re + 1);
		scanf_s("%d", &ary[re]);

		re++;
	}

	re = 0;
	while (re < 10)
	{
		hap = hap + ary[re];

		re++;
	}

	printf("\n합계 ==> %d \n\n", hap);
}