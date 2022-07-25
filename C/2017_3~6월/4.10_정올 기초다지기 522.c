#include <stdio.h>

int main()
{
	int num_1, num_2;

	scanf_s("%d %d", &num_1, &num_2);
	printf("%d \n", num_1 && num_2);
	printf("%d \n\n", num_1 ^ num_2);
}