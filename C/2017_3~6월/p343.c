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

	printf("두 문자를 입력 : ");
	scanf_s("%c %c", &ch1, 1, &ch2, 1);

	swap(&ch1, &ch2);

	printf("바뀐 문자 ==> %c %c \n\n", ch1, ch2);
}