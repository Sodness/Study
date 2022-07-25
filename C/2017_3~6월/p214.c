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

	printf("1에서 10까지의 합: %d \n", sum);
}