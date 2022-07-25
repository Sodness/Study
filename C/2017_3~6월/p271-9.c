#include <stdio.h>
#include <string.h>

int main()
{
	int num[4];
	int re;

	re = 0;
	while (re < 4)
	{
		printf("%d번째 숫자를 입력하세요 : ", re + 1);
		scanf_s("%d", &num[re]);

		re++;
	}
	printf("\n");

	printf(" 합계 ==> %d \n", num[0] + num[1] + num[2] + num[3]);
	printf(" 곱셈 ==> %d \n\n", num[0] * num[1] * num[2] * num[3]);
}