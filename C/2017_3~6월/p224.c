#include <stdio.h>

int main()
{
	int re;
	int sum;

	sum = 0;

	for (re = 1; re <= 100; re++)
	{
		sum = sum + re;

		if (sum >= 1000)
			break;
	}

	printf("1 ~ 100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d \n", re);
}