#include <stdio.h>

int main()
{
		int a, b, c;
		char max;
		scanf_s("%d %d %d", &a, &b, &c);

		if (a < c, b < c)
		{
			max = c;
		}

		if (a < b, c < b)
		{
			max = b;
		}

		if (c < a, b < a)
		{
			max = a;
		}

	printf("%d \n", max);

	return 0;
}