#include <stdio.h>
#include <string.h>

int main()
{
	char ss1[20];
	char ss2[20];
	char ss3[40] = "";
	int r1, r2;

	puts(ss1);
	puts(ss3);

	puts("���ڿ� 1�� �Է��ϼ���.");
	gets_s(ss1, 20);
	puts("���ڿ� 2�� �Է��ϼ���.");
	gets_s(ss2, 20);

	strcat_s(ss3, 40, ss1);
	strcat_s(ss3, 40, ss2);

	printf("������ ���ڿ� ==> %s \n", ss3);

	r1 = strlen(ss1);
	r2 = strlen(ss2);

	printf("���ڿ� 1 ���� ==> %d \n", r1);
	printf("���ڿ� 2 ���� ==> %d \n", r2);

	if (strcmp(ss1, ss2) == 0)
		puts("�� ���ڿ��� ����. \n\n");
	else
		puts("�� ���ڿ��� �ٸ���. \n\n");
}