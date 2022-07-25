#include <stdio.h>
#include <malloc.h>

void main()
{
	int hap = 0;
	int *p;
	int num, re;

	p = (int*)malloc(sizeof(int) * 1);

	for (re = 1; ; re++)
	{
		printf(" %d 번째 숫자 : ", re);
		scanf_s("%d", &num);

		if (num != 0) {
			p = (int*) realloc(p, sizeof(int) * re);

			p[re - 1] = num;

			hap = hap + p[re - 1];
		}
		else break;
	}

	printf("\n입력 숫자 합 ==> %d \n\n", hap);

	free(p);
}