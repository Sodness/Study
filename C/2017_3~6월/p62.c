#include <stdio.h>

void main()
{
	int num_1, num_2, num_3, num_4;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_1);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_2);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_3);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &num_4);

	printf("\n %d + %d + %d + %d = %d \n\n", num_1, num_2, num_3, num_4, num_1 + num_2 + num_3 + num_4);
}