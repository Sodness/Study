#include <stdio.h>

int main()
{
	int re;
	int sum;

	sum = 0;

	for (re = 1; re <= 100; re++)
	{
		if (re % 3 == 0)
			continue;

			sum = sum + re;
	}

	printf("1 ~ 100������ ��<3�� ��� ����>: %d \n", sum);
}