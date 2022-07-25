#include <stdio.h>

int main()
{
	int re, sum = 0;

	for (re = 501; re <= 1000; re = re + 2)
		sum = sum + re;

	printf("500에서 1000까지의 홀수의 합: %d \n\n", sum);
}
