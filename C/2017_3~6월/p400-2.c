#include <stdio.h>

void main()
{
	int a[3];
	int *p;

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;

	p = a;

	printf("%d \n", a + 1);
	printf("%d \n", a[1]);
	printf("%d \n", p + 1);
	printf("%d \n\n", &a + 1);
}