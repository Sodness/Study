#include <stdio.h>

int main()
{
	int a;
	int b, c, d, e;
    int result_1, result_2, result_3, result_4, result_5;

	printf("4ÀÚ¸®¼ö :");
	scanf_s("%d", &a);

	result_1 = a / 1000 ;
	b = result_1;

	result_2 = (a - 1000 * b) / 100;
	c = result_2;

	result_3 = (a % 100) / 10;
	d = result_3;

	result_4 = a % 10;
	e = result_4;
	
	result_5 = b + c + d + e;
	printf("%d + %d + %d+ %d = %d\n", b, c, d, e, result_5);
}