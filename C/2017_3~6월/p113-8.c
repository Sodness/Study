#include <stdio.h>

int main()
{
	int a;
	printf("16진수를 입력하세요 : ");
	scanf_s("%x", &a);
	printf("입력한 16진수는 10진수로 %d 입니다 \n", a);
}