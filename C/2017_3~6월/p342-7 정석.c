#include <stdio.h>

int diff(char *a, char *b)
{
	if (*a > *b)
		return *a - *b;
	else
		return *b - *a;
}

int main()
{
	char ch1, ch2;

	printf("�� ���ڸ� �Է� : ");
	scanf_s("%c %c", &ch1, 1, &ch2, 1);
	
	printf("�� ������ ���� ==> %d \n\n", diff(&ch1, &ch2));
}