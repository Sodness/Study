#include <stdio.h>

int main()
{
	int num_1, num_2;

	scanf_s("%d %d", &num_1, &num_2);

	if (num_1 == 0 && num_2 == 0)
	{
		printf("1 \n\n");
	}
	else
		printf("0 \n\n");
}