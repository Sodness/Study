#include <stdio.h>

int main()
{
	int num_1, num_2, num_3, num_4, result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_1);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_2);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_3);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_4);

	result = num_1 + num_2 + num_3 + num_4;

		printf("%d + %d + %d + %d = %d \n", num_1, num_2, num_3, num_4, result);

	return 0;
}