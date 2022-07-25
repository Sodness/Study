#include <stdio.h>

int main()
{
	int a, b, t;
	a = 10;
	b = 20;

	a = t;
	t = b;
	b = a;

	printf("%d %d \n", a, b);

	return 0;
}