#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
	char *p[3];
	char imsi[100];
	int re, cnt;

	for (re = 0; re < 3; re++)
	{
		printf(" %d ��° ���ڿ� : ", re + 1);
		gets_s(imsi, 99);

		cnt = strlen(imsi);
		p[re] = (char*)malloc(sizeof(char) * (cnt + 1));

		strcpy_s(p[re], cnt + 1, imsi);
	}

	printf("\n -- �Է°� �ݴ�� ���<������> --\n");

	for (re = 2; re >= 0; re--)
	{
		printf(" %d : ", re);
		puts(p[re]);
	}

	printf("\n\n");
	
	for (re = 0; re < 3; re++)
	{
		free(p[re]);
	}
}