#include <stdio.h>
#include <malloc.h>

int main()
{
	int *p;
	int re, hap = 0;
	int cnt;

	printf(" �Է��� ������ ? ");
	scanf_s("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (re = 0; re < cnt; re++)
	{
		printf(" %d ��° ���� : ", re + 1);
		scanf_s("%d", p + re);
	}

	for (re = 0; re < cnt; re++)
		hap = hap + *(p + re);

	printf("�Է� ���� �� ==> %d \n\n", hap);

	free(p);
}