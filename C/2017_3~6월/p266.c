#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[100], str_2[100];
	int diff, re, len;

	printf(" ���� �Է� : ");
	gets_s(str_1, 100);

	len = strlen(str_1);
	diff = 'a' - 'A';

	for (re = 0; re < len; re++)
	{
		if ('a' <= str_1[re] && str_1[re] <= 'z')
			str_2[re] = str_1[re] - diff;
		else if ('A' <= str_1[re] && str_1[re] <= 'Z')
			str_2[re] = str_1[re] + diff;
			else
				str_2[re] = str_1[re];
	}
	str_2[re] = '\0';

	printf(" ��ȯ�� ���� =>%s \n\n", str_2);
}