#include <stdio.h>

void main()
{
	int num_1, num_2, num_3, num_4;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_1);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_2);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_3);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &num_4);

	printf("\n %d + %d + %d + %d = %d \n\n", num_1, num_2, num_3, num_4, num_1 + num_2 + num_3 + num_4);
}