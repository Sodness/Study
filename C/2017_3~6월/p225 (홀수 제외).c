#include <stdio.h>

int main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			continue;

		hap += i;
	}

	printf(" 1~100까지의 합(홀수 제외): %d\n\n", hap);
}