#include <stdio.h>

int main()
{
	int num;

	printf("ó���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("�Է��� ���� + �Դϴ�. \n");
	else
		if (num == 0)
			printf("�Է��� ���� 0 �Դϴ�. \n");
		else
			printf("�Է��� ���� - �Դϴ�. \n");
}