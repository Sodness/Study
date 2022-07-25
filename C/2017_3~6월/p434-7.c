#include <stdio.h>

void main()
{
	enum week {sun = -5, mon, tue, wed, thu, fri, sat = 0};

	printf("%d\n", sun);
	printf("%d\n", mon);
	printf("%d\n", tue);
	printf("%d\n", wed);
	printf("%d\n", thu);
	printf("%d\n", fri);
	printf("%d\n", sat);
}