#include <stdio.h>

int main()
{
	char str_1[5] = "abcd";
	char str_2[5];
	int re;

	for (re = 0; re < 4; re++)
		str_2[re] = str_1[3 - re];

	str_2[4] = '\0';

	printf("거꾸로 출련한 결과==> %s \n", str_2);
}