#include <stdio.h>

int main()
{
	int num[4];
	int sum = 0, re = 0;

	while (re <= 3)
	{
		printf("%d번째 숫자를 입력하세요 : ", re + 1);
		scanf_s("%d", &num[re]);
		re++;
	}

	re = 0;
	while (re <= 3)
	{
		sum = sum + num[re];
		re++;

	}
		printf("합계 ==> %d \n\n", sum);
}