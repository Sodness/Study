#include <stdio.h>

void main()
{
	enum month {January, February, March, Aprill, May, June, July, August, September, October, November, December};
	enum month mm;

	printf("월 입력 : ");
	scanf_s("%d", &mm);

	switch (mm)
	{
	case 1: printf("1월은 January 입니다.\n\n"); break;
	case 2: printf("2월은 February 입니다.\n\n"); break;
	case 3: printf("3월은 March 입니다.\n\n"); break;
	case 4: printf("4월은 Aprill 입니다.\n\n"); break;
	case 5: printf("5월은 May 입니다.\n\n"); break;
	case 6: printf("6월은 June 입니다.\n\n"); break;
	case 7: printf("7월은 July 입니다.\n\n"); break;
	case 8: printf("8월은 August 입니다.\n\n"); break;
	case 9: printf("9월은 September 입니다.\n\n"); break;
	case 10: printf("10월은 October 입니다.\n\n"); break;
	case 11: printf("11월은 November 입니다.\n\n"); break;
	case 12: printf("12월은 December 입니다.\n\n"); break;
	}
}