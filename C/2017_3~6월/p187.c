#include <stdio.h>

int main()
{
	int re, sum = 0, num;

	printf("�� �Է� : ");
	scanf_s("%d", &num);

	for (re = 1; re <= num; re++)
		sum = sum + re;

	printf("1���� %d������ ��: %d \n\n", num, sum);
}