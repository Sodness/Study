#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[20];
	char str_2[20];
	int r1, r2;

	puts("ù��° ���ڿ��� �Է��ϼ���.");
	gets_s(str_1, 20);

	puts("�ι�° ���ڿ��� �Է��ϼ���.");
	gets_s(str_2, 20);

	r1 = strlen(str_1);
	r2 = strlen(str_2);

	printf("ù��° ���ڿ��� ���� ==> %d \n", r1);
	printf("�ι�° ���ڿ��� ���� ==> %d \n", r2);

	if (strcmp(str_1, str_2) == 0)
		puts("�� ���ڿ��� ������ �����ϴ�. \n\n");
	else
		puts("�� ���ڿ��� ������ �ٸ��ϴ�. \n\n");
}