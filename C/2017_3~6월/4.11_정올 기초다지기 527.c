#include <stdio.h>

int main()
{
	int num_1, num_2;

	scanf_s("%d %d", &num_1, &num_2);

	printf("\n%d ", num_1 / num_2);
	printf("%.2f \n\n", (float)num_1 / num_2);
}