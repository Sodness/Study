#include <stdio.h>

int main()
{
	char str[8] = "Basic-C";
	char *p;
	int re;

	p = str;

	for (re = sizeof(str) - 2; re >= 0; re--)
		printf("%c", *(p + re));

	printf("\n\n");
}