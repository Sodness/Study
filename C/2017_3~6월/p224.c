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

	printf("1 ~ 100의 합에서 최초로 1000이 넘는 위치는? : %d \n", re);
}