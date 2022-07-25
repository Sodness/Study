#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[100], str_2[100];
	char ch_1, ch_2;
	int re;

	printf("여러 글자를 입력 : ");
	gets_s(str_1, 99);

	printf("기존 문자와 새로운 문자 : ");
	scanf_s("%c %c", &ch_1, 1, &ch_2, 1);

	for (re = 0; re <= 99; re++)
	{
		if (str_1[re] == ch_1)
			str_2[re] = ch_2;
		else
			str_2[re] = str_1[re];
	}

	printf("변환된 결과 ==> %s \n\n", str_2);
}