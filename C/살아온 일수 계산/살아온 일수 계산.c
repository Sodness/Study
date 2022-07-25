#include <stdio.h>

int DayDay(int, int);

int main(void)
{
	int birthday, today;
	int total_date;

	printf("생일을 입력하세요 (예:20171128) : ");
	scanf_s("%d", &birthday);

	printf("오늘을 입력하세요 (예:20171128) : ");
	scanf_s("%d", &today);

	printf("\n");

	total_date = DayDay(birthday, today);
	printf("당신이 지금까지 살아온 일수는 %d일 입니다. \n\n", total_date);

	return 0;
}

int DayDay(int birthday, int today)
{
	int birthday_year, today_year;
	birthday_year = birthday / 10000;
	today_year = today / 10000;

	int birthday_month, today_month;
	birthday_month = birthday / 100 % 100;
	today_month = today / 100 % 100;

	int birthday_date, today_date;
	birthday_date = birthday % 100;
	today_date = today % 100;

	int year, month = 0, date;
	year = today_year - birthday_year;
	for (int i = birthday_month; i < today_month; i++)
	{
		if (i % 2 == 1)
			month += 30;
		else
			month += 31;
	}
	date = today_date - birthday_date;

	int total_date;
	total_date = (365 * year) + month + date;

	return total_date;
}