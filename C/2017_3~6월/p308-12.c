#include <stdio.h>

int main()
{
	char ch = 'A';
	char *p_1;
	char *p_2;

	p_1 = &ch;
	p_2 = p_1;
	*p_2 = 'Z';

	printf("ch�� ������ �ִ� ��: ch ==> %c \n\n", ch);
}