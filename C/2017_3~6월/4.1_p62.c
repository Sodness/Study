#include <stdio.h>

int main()
{
	int num_1, num_2, num_3, num_4, result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_1);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_2);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_3);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_4);

	result = num_1 + num_2 + num_3 + num_4;

		printf("%d + %d + %d + %d = %d \n", num_1, num_2, num_3, num_4, result);

	return 0;
}