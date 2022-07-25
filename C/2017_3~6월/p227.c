#include <stdio.h>

int main()
{
	int re;
	int sum;
	
	sum = 0;

	for (re = 1; re <= 100; re++)
	{
		sum += re;

		if (sum > 2000)
			goto outside;
	}

outside:
	printf("1부터 %d까지 합하면 2000이 넘어요. \n", re);
}