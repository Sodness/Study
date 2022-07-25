#include <stdio.h>

int main()
{
	int money, c500, c100, c50, c10;

	printf(" ## 교환할 돈은 ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n 오백원짜리 ==> %d 개", c500);
	printf("\n 백원짜리 ==> %d 개", c100);
	printf("\n 오십원짜리 ==> %d 개", c50);
	printf("\n 십원짜리 ==> %d 개", c10);
	printf("\n 바꾸지 못한 잔돈 ==> %d 원 \n", money);
}