#include <stdio.h>

void main()
{
	FILE *wfp;
	char str[20];

	fopen_s(&wfp, "c:\\temp\\data3.txt", "w");

	printf("���ڿ��� �Է�<�ִ� 19��> : ");
	gets_s(str, 20);

	fputs(str, wfp);

	printf("\n");

	fclose(wfp);
}
