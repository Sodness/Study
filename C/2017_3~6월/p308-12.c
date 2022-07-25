#include <stdio.h>

int main()
{
	char ch = 'A';
	char *p_1;
	char *p_2;

	p_1 = &ch;
	p_2 = p_1;
	*p_2 = 'Z';

	printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
}