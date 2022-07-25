#include <stdio.h>

int main()
{
	int aa[3];
	int *p;
	int re, hap = 0;

	for (re = 0; re < 3; re++)
	{
		printf(" %d 번째 숫자 : ", re + 1);
		scanf_s("%d", &aa[re]);
	}

	p = aa;

	for (re = 0; re < 3; re++)
		hap = hap + *(p + re);

	printf("입력 숫자의 합 => %d \n\n", hap);
}