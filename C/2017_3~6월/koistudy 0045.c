#include <stdio.h>

int main()
{
	int month;

	scanf_s("%d", &month);

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("winter \n\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring \n\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer \n\n");
		break;
	default:
	case 9:
	case 10:
	case 11:
		printf("fall \n\n");
	}
}