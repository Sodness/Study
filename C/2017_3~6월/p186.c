#include <stdio.h>

int main()
{
	int re, sum = 0;

	for (re = 501; re <= 1000; re = re + 2)
		sum = sum + re;

	printf("500���� 1000������ Ȧ���� ��: %d \n\n", sum);
}
