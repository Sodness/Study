#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf_s(" %c", &ch, 1);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다. \n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d 입니다. \n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d 입니다. \n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
}