#include <stdio.h>

int main()
{
	int num_1, num_2;
	int swit;

	scanf_s("%d %d", &num_1, &num_2);

	swit = num_1 - num_2;

	switch (swit)
	{
	case 0 : printf("1 \n\n"); break;

	default : printf("0 \n\n"); break;
	}
}