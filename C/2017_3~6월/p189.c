#include <stdio.h>

int main()
{
	int re, sum;
	int num;

	printf("¸î ´Ü ? ");
	scanf_s("%d", &num);

	for (re = 1; re <= 9; re++)
	{
		sum = num * re;
		printf("%d * %d = %d \n", num, re, sum);
	}
	printf("\n");
}