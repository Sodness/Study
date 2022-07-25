#include <stdio.h>

void main() 
{
	int num;

	printf("정수를 입력하세요 ==> ");
	scanf_s("%d", &num);

	printf("\n10진수 ==> %d \n", num);
	printf("16진수 ==> %x \n", num);
	printf("8진수 ==> %o \n\n", num);
}