#include <stdio.h>

int main()
{
	int num[4];
	
	printf("1��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num[0]);
	printf("2��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num[1]);
	printf("3��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num[2]);
	printf("4��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num[3]);

	printf("�հ� ==> %d \n", num[0] + num[1] + num[2] + num[3]);
}