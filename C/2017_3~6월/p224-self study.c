#include <stdio.h>

int main()
{
	int hap = 0;
	int i;

	i = 1;
	while (i <= 100)
	{
		hap = hap + i;

		if (hap >= 1000)
			break;

		i++;
	}

	printf(" 1~100의 합에서 최초로 1000이 넘는 위치는? : %d\n\n", i);
}