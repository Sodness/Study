#include <stdio.h>

int main()
{
	int re;
	char str[100];
	char ch;
	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;

	printf("문자열을 입력<100자 이내> : ");
	scanf_s("%s", str, 99);

	re = 0;
	do
	{
		ch = str[re];

		if ('A' <= ch && ch <= 'Z')
			upper_cnt ++;
		if ('a' <= ch && ch <= 'z')
			lower_cnt ++;
		if ('0' <= ch && ch <= '9')
			digit_cnt ++;

		re++;
	} while (ch != '\0');

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개 \n", upper_cnt, lower_cnt, digit_cnt);
}