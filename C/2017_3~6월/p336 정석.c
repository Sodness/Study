#include <stdio.h>

char upper(char ch)
{ return ch - ('a' - 'A'); }

char lower(char ch)
{ return ch + ('a' - 'A'); }

int main()
{
	char in[100], out[100];
	char ch;
	int i = 0;

	printf("문자열을 입력(100자 이내) : ");
	scanf_s("%s", in, 100);

	do{
		ch = in[i];

		if ('A' <= ch && ch <= 'Z')
			out[i] = lower(ch);
		else if ('a' <= ch && ch <= 'z')
			out[i] = upper(ch);
		else
			out[i] = ch;

		i++;
	} while (ch != '\0');

	out[i] = '\0';
	printf("변환된 결과 ==> %s \n\n", out);
}