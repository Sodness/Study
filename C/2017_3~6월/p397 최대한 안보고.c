#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	char *pstr[3];
	int re_1, re_2, cnt;
	char tmp[100];

	for (re_1 = 0; re_1 < 3; re_1++)
	{
		printf(" %d 번째 문자열 : ", re_1 + 1);
		gets_s(tmp, 99);

		cnt = strlen(tmp);
		pstr[re_1] = (char*)malloc((sizeof(char) * cnt) + 1);

		strcpy_s(pstr[re_1], cnt + 1, tmp);
	}

	printf("\n");

	printf(" -- 입력과 반대로 출력<포인터> : 글자 순서도 거꾸로 --\n");

	for (re_1 = 2; re_1 >= 0; re_1--)
	{
		cnt = strlen(pstr[re_1]);
		tmp[cnt] = '\0';

		for (re_2 = cnt - 1; re_2 >= 0; re_2--)
			tmp[cnt - 1 - re_2] = pstr[re_1][re_2];

		printf(" %d :%s", re_1, tmp);

		printf("\n");
	}

	printf("\n");

	for (re_1 = 0; re_1 < 3; re_1++)
		free(pstr[re_1]);
}