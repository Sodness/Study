#include <stdio.h>

int main()
{
	int aa[3] = { 100, 200 };
	int bb[] = { 100, 200, 300 };
	int i;

	for (i = 0; i < 3; i++)
		printf("aa[%d] ==> %d \t", i, aa[i]);
	printf("\n");

	for (i = 0; i < 4; i++)
		printf("bb[%d] ==> %d \t", i, bb[i]);
	printf("\n\n");
}