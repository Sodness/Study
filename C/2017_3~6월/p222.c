#include <stdio.h>

int main()
{
	int num_1 = 1, num_2;

	while (1)
	{
		printf("더할 두 수 입력 <멈추려면 0을 입력> : ");
		scanf_s("%d %d", &num_1, &num_2);

		if (num_1 == 0)
			break;

		printf("%d + %d = %d \n", num_1, num_2, num_1 + num_2);
	}

	printf("0을 입력해서 for문을 탈출했습니다.");
}