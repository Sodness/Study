#include <stdio.h>

int main()
{
	int num1, num2, num3, num4;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &num1);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &num2);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &num3);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &num4);

	result = num1 + num2 + num3 + num4;
	printf("%d + %d + %d + %d = %d \n", num1, num2, num3, num4, result);

	return 0;
}