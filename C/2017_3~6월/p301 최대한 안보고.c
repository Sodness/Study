#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	char *p;
	int re, size;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, 20);

	size = strlen(str);

	p = str;

	printf("������ �Ųٷ� ��� ==> ");

	for (re = 0; re < size; re++)
		printf("%c", *(p + size - (re + 1)));

	printf("\n%c", *(p + size));
	printf("\n\n%d", size);
	printf("\n%d", p);
	printf("\n%d", p + size);

	printf("\n\n");
}