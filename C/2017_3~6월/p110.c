#include <stdio.h>
#include <string.h>

void main()
{
	int re, len;
	char str[10];

	printf("���ڿ��� �Է� ==> ");
	gets_s(str, 9);

	len = strlen(str);

	for (re = len - 1; re >= 0; re--)
		printf("%c", str[re]);

	printf("\n\n %d", len);
}