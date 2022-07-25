#include <stdio.h>
#include <malloc.h>

void main()
{
	int *p;
	int re, sum = 0;
	int num;

	printf(" 입력할 개수는 ? ");
	scanf_s("%d", &num);

	p = (int*)malloc(sizeof(int) * num);

	printf("\n");

	for (re = 0; re < num; re++)
	{
		printf(" %d 번째 숫자 : ", re + 1);
		scanf_s("%d", &p[re]);
	}

	for (re = 0; re < num; re++)
	{
		if (p[re] % 2 == 0)
			sum = sum + p[re];
		else 
			continue;
	}

	printf("\n입력한 짝수합 ==> %d \n\n", sum);

	free(p);
}