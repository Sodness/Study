#include <stdio.h>
#include <malloc.h>

void main()
{
	int *p;
	int re, sum = 0;
	int num;

	printf(" �Է��� ������ ? ");
	scanf_s("%d", &num);

	p = (int*)malloc(sizeof(int) * num);

	printf("\n");

	for (re = 0; re < num; re++)
	{
		printf(" %d ��° ���� : ", re + 1);
		scanf_s("%d", &p[re]);
	}

	for (re = 0; re < num; re++)
	{
		if (p[re] % 2 == 0)
			sum = sum + p[re];
		else 
			continue;
	}

	printf("\n�Է��� ¦���� ==> %d \n\n", sum);

	free(p);
}