#include <stdio.h>

void main()
{
	enum month {January, February, March, Aprill, May, June, July, August, September, October, November, December};
	enum month mm;

	printf("�� �Է� : ");
	scanf_s("%d", &mm);

	switch (mm)
	{
	case 1: printf("1���� January �Դϴ�.\n\n"); break;
	case 2: printf("2���� February �Դϴ�.\n\n"); break;
	case 3: printf("3���� March �Դϴ�.\n\n"); break;
	case 4: printf("4���� Aprill �Դϴ�.\n\n"); break;
	case 5: printf("5���� May �Դϴ�.\n\n"); break;
	case 6: printf("6���� June �Դϴ�.\n\n"); break;
	case 7: printf("7���� July �Դϴ�.\n\n"); break;
	case 8: printf("8���� August �Դϴ�.\n\n"); break;
	case 9: printf("9���� September �Դϴ�.\n\n"); break;
	case 10: printf("10���� October �Դϴ�.\n\n"); break;
	case 11: printf("11���� November �Դϴ�.\n\n"); break;
	case 12: printf("12���� December �Դϴ�.\n\n"); break;
	}
}