#include <stdio.h>

int main()
{
	int re, i;
	int star;

	char str[100];
	char ch;

	printf("���ڸ� ���� �� �Է� : ");
	scanf_s("%s", str, 99);

	i = 0;
	ch = str[i];

	while (ch != '\n')
	{
		star = (int)ch - 48;

		for (re = 0; re < star; re++)
			printf("*");

		printf("\n");
		i = i + 1;
		ch = str[i];
	}
}