#include <stdio.h>

char func1(ch);

int main()
{
	char in[100];
	char re;
	char str[100];

	printf("문자열을 입력<100자 이내> : ");
	scanf_s("%s", in, 100);

	printf("변환된 결과 ==> ");

	for (re = 0; in[re] != '\0'; re++)
	{
		str[re] = func1(in[re]);
	}

	str[re] = '\0';

	printf("%s", str);
	printf("\n\n");
}

char func1(ch)
{
	int diff;
	
	diff = 'a' - 'A';

	if ('A' <= ch && ch <= 'Z')
		ch = ch + diff;
		else if ('a' <= ch && ch <= 'z')
			ch = ch - diff;
		else
			ch = ch;

		return ch;
}