#include <stdio.h>

void swap(char *a, char *b)
{
	char imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

int main()
{
	char ch1, ch2;

	printf("�� ���ڸ� �Է� : ");
	scanf_s("%c %c", &ch1, 1, &ch2, 1);

	swap(&ch1, &ch2);

	printf("�ٲ� ���� ==> %c %c \n\n", ch1, ch2);
}