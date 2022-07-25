#include <stdio.h>

int main()
{
	int num[4];
	
	printf("1번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num[0]);
	printf("2번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num[1]);
	printf("3번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num[2]);
	printf("4번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num[3]);

	printf("합계 ==> %d \n", num[0] + num[1] + num[2] + num[3]);
}