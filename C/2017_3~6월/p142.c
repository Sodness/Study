#include <stdio.h>

int main()
{
	int money, c500, c100, c50, c10;

	printf(" ## ��ȯ�� ���� ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n �����¥�� ==> %d ��", c500);
	printf("\n ���¥�� ==> %d ��", c100);
	printf("\n ���ʿ�¥�� ==> %d ��", c50);
	printf("\n �ʿ�¥�� ==> %d ��", c10);
	printf("\n �ٲ��� ���� �ܵ� ==> %d �� \n", money);
}