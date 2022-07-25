#include <stdio.h>

void func1(int num);
int num;

int main()
{
	printf("출력하고 싶은 단을 입력 : ");
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