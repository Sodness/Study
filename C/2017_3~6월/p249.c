#include <stdio.h>

int main()
{
	char str[8] = "Basic-C";
	int re;

	str[5] = '#';

	for (re = 0; re < 8; re++)
		printf("str[%d] ==> %c \n", re, str[re]);

	printf("���ڿ� �迭 str ==> %s \n\n", str);
}