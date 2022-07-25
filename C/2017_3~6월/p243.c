#include <stdio.h>

int main()
{
	int num_1[4] = { 100, 200, 300, 400 };
	int num_2[] = { 100, 200, 300, 400 };
	int num_3[4] = { 100, 200};
	int num_4[4] = { 0 };
	int re;

	for (re = 0; re <= 3; re++)
		printf("num_1[%d]==>%d\t", re, num_1[re]);
	printf("\n");

	for (re = 0; re <= 3; re++)
		printf("num_2[%d]==>%d\t", re, num_2[re]);
	printf("\n");

	for (re = 0; re <= 3; re++)
		printf("num_3[%d]==>%d\t", re, num_3[re]);
	printf("\n");

	for (re = 0; re <= 3; re++)
		printf("num_4[%d]==>%d\t", re, num_4[re]);
	printf("\n");
}