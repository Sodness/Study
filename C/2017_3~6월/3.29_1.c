#include <stdio.h>

int main()
{
	int a, b, t;
	a = 10;
	b = 20;

	t = a;
	a = b;
	b = t;

	printf("%d %d \n", a, b);

	return 0;
}