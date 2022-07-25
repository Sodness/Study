#include <stdio.h>

void main()
{
	float num_1, num_2;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &num_1);
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &num_2);

	for (; ;) {
		if (num_2 == 0) {
			printf("0으로 나눌수 없는거 알잖아요. \n");
			printf("두번째 계산할 값을 입력하시지! ==> ");
			scanf_s("%f", &num_2);
		}

		if (num_2 != 0)
			break;
	}

	printf("\n");

	printf(" %4.2f + %4.2f = %4.2f \n", num_1, num_2, num_1 + num_2);
	printf(" %4.2f - %4.2f = %4.2f \n", num_1, num_2, num_1 - num_2);
	printf(" %4.2f * %4.2f = %4.2f \n", num_1, num_2, num_1 * num_2);
	printf(" %4.2f / %4.2f = %4.2f \n", num_1, num_2, num_1 / num_2);
	printf(" %d %% %d = %d \n\n", (int)num_1, (int)num_2, (int)num_1 % (int)num_2);
}