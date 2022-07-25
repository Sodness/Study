#include <stdio.h>

int main()
{
	int re, sum = 0, num;

	printf("값 입력 : ");
	scanf_s("%d", &num);

	for (re = 1; re <= num; re++)
		sum = sum + re;

	printf("1에서 %d까지의 합: %d \n\n", num, sum);
}