#include <stdio.h>
#include <string.h>

int main()
{
	int re, len;
	char str_1[100], str_2[100];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str_1, 100);

	len = strlen(str_1);

	for (re = 0; re < len; re++)
	{
		str_2[re] = str_1[len - (re + 1)];
	}
	str_2[re] = '\0';

	printf("������ �Ųٷ� ��� ==> %s \n", str_2);
}