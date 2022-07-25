#include <stdio.h>

int main()
{
	int num_1, num_2, num_3;
	int sum = 0, re;

	printf("합계의 시작값 ==> ");
	scanf_s("%d", &num_1);

	printf("합계의 끝값 ==> ");
	scanf_s("%d", &num_2);

	printf("배수 ==> ");
	scanf_s("%d", &num_3);

	for (re = num_1; re <= num_2; re++)
		if (re % num_3 == 0)
			sum = sum + re;

	printf("\n%d부터 %d까지의 %d배수의 합계 ==> %d \n\n", num_1, num_2, num_3, sum);
}