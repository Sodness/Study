#include <stdio.h>

int main()
{
	int num_1, num_2;
	int *p_1, *p_2;
	int tmp;

	printf("num_1 �� �Է� : ");
	scanf_s("%d", &num_1);

	printf("num_2 �� �Է� : ");
	scanf_s("%d", &num_2);

	p_1 = &num_1;
	p_2 = &num_2;

	tmp = *p_1;
	*p_1 = *p_2;
	*p_2 = tmp;

	printf("\n�ٲ� �� num_1�� %d, num_2�� %d \n\n", *p_1, *p_2);
}