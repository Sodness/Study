#include <stdio.h>

int main()
{
	int re;
	int sum;

	re = 1;
	sum = 0;

	while (re <= 10)
	{
		sum = sum + re;
		re++;
	}

	printf("1���� 10������ ��: %d \n", sum);
}