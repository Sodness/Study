#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[100], str_2[100];
	char ch_1, ch_2;
	int re;

	printf("���� ���ڸ� �Է� : ");
	gets_s(str_1, 99);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf_s("%c %c", &ch_1, 1, &ch_2, 1);

	for (re = 0; re <= 99; re++)
	{
		if (str_1[re] == ch_1)
			str_2[re] = ch_2;
		else
			str_2[re] = str_1[re];
	}

	printf("��ȯ�� ��� ==> %s \n\n", str_2);
}