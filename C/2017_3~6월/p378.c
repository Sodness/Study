#include <stdio.h>

int main()
{
	int aa[3];
	int *p;
	int re, hap = 0;

	for (re = 0; re < 3; re++)
	{
		printf(" %d ��° ���� : ", re + 1);
		scanf_s("%d", &aa[re]);
	}

	p = aa;

	for (re = 0; re < 3; re++)
		hap = hap + *(p + re);

	printf("�Է� ������ �� => %d \n\n", hap);
}