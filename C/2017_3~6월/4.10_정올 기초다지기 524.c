#include <stdio.h>

int main()
{
	int num_1, num_2;

	scanf_s("%d %d", &num_1, &num_2);
	printf("%d ", num_1 && num_2);
	printf("%d \n\n", (num_1 != 0) || (num_2 != 0));
}