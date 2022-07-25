#include <stdio.h>

int main()
{
	int num_1, num_2, num_3;

	scanf_s("%d %d %d", &num_1, &num_2, &num_3);

	if (num_1 > num_2 && num_1 > num_3)
		printf("1 ");
	else
		printf("0 "); 

	if (num_1 == num_2 && num_2 == num_3)
		printf("1 \n\n");
	else
		printf("0 \n\n");
}