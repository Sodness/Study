#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	char *p[3];
	char imsi[100];
	int i, size;

	for (i = 0; i < 3; i++)
	{
		printf(" %d ��° ���ڿ� : ", i + 1);
		gets_s(imsi, 99);

		size = strlen(imsi);
		p[i] = (char*)malloc(sizeof(char) * size + 1);

		strcpy_s(p[i], size + 1, imsi);
	}

	printf("\n -- �Է��� ������ �� --\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d \n", strlen(p[i]));
	}

	for (i = 0; i < 3; i++)
		free(p[i]);
}