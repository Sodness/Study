#include <stdio.h>

int main()
{
	float num_1, num_2;

	printf("���� => ");
	scanf_s("%f", &num_1);

	printf("ȭ�� => ");
	scanf_s("%f", &num_2);

	printf("\n���� %.1f���� ȭ�� %.1f���̴�. \n", num_1, (num_1 * 1.8) + 32);
	printf("ȭ�� %.1f���� ���� %.1f���̴�. \n\n", num_2, (num_2 - 32) * 0.55);
}