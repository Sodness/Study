#include <stdio.h>

void func1(int num);
int num;

int main()
{
	printf("����ϰ� ���� ���� �Է� : ");
	scanf_s("%d", &num);

	func1(num);
}

void func1(int num)
{
	int re;

	printf("\n");

	for (re = 1; re <= 9; re++)
	{
		printf("%2d X %2d= %2d\n", num, re, num * re);
	}

	printf("\n");
}