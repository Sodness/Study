#include <stdio.h>

int main()
{
	int num_1, num_2;

	scanf_s("%d %d", &num_1, &num_2);
	printf("%d - %d = %d", num_1, num_2, num_1 - num_2);
}