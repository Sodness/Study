#include <stdio.h>

int main()
{
	int num_1, num_2;
	char cclt;

	while (1)
	{
		printf("계산할 두 수를 입력 <멈추려면 Ctrl+C> : ");
		scanf_s("%d %d", &num_1, &num_2);

		printf("계산할 연산자를 입력하세요 : ");
		scanf_s(" %c", &cclt, 1);
		switch (cclt)
		{
		case '+': printf("%d + %d = %d 입니다. \n", num_1, num_2, num_1 + num_2); break;
		case '-': printf("%d - %d = %d 입니다. \n", num_1, num_2, num_1 - num_2); break;
		case '*': printf("%d * %d = %d 입니다. \n", num_1, num_2, num_1 * num_2); break;
		case '/': printf("%d / %d = %d 입니다. \n", num_1, num_2, num_1 / num_2); break;
		case '%': printf("%d % %d = %d 입니다. \n", num_1, num_2, num_1 % num_2); break;
		default: printf("잘못입력했습니다. \n");
		}
	}
}