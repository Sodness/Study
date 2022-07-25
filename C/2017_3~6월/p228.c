#include <stdio.h>

int main()
{
	int sum = 0;
	int re;

	for (re = 1; re <= 100; re++)
		sum += re;

	printf("1부터 100까지의 합은 %d 입니다. \n", sum);
	return 0;

	printf("프로그램의 끝입니다.");
}