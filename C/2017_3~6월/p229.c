#include <stdio.h>

int main()
{
	int num_1, num_2, num_3;
	int sum = 0, re;

	printf("�հ��� ���۰� ==> ");
	scanf_s("%d", &num_1);

	printf("�հ��� ���� ==> ");
	scanf_s("%d", &num_2);

	printf("��� ==> ");
	scanf_s("%d", &num_3);

	for (re = num_1; re <= num_2; re++)
		if (re % num_3 == 0)
			sum = sum + re;

	printf("\n%d���� %d������ %d����� �հ� ==> %d \n\n", num_1, num_2, num_3, sum);
}