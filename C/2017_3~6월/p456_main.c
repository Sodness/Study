#include <stdio.h>

void exchange();

int a, b;

int main()
{
	printf("a�� ���� �Է� : ");
	scanf_s("%d", &a);
	printf("b�� ���� �Է� : ");
	scanf_s("%d", &b);

	exchange();

	printf("\n�ٲ� �� a�� %d, b�� %d \n", a, b);
}