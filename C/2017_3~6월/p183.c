#include <stdio.h>

int main()
{
	int re, sum = 0;

	for (re = 1; re <= 10; re++)
		sum = sum + re;

	printf("1에서 10까지의 합: %d \n\n", sum);
}