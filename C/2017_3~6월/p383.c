#include <stdio.h>
#include <malloc.h>

int main()
{
	int *p;
	int re, hap = 0;
	int cnt;

	printf(" 입력할 개수는 ? ");
	scanf_s("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (re = 0; re < cnt; re++)
	{
		printf(" %d 번째 숫자 : ", re + 1);
		scanf_s("%d", p + re);
	}

	for (re = 0; re < cnt; re++)
		hap = hap + *(p + re);

	printf("입력 숫자 합 ==> %d \n\n", hap);

	free(p);
}