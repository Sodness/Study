#include <stdio.h>

int main()
{
	int num_1, num_2;

	scanf_s("%d %d", &num_1, &num_2);
	printf("%d - %d = %d", num_1, num_2, num_1 - num_2);
}

#include <stdio.h>

int main()
{
	int num_1, num_2;
	int result;

	scanf_s("%d %d", &num_1, &num_2);
	result = num_1 - num_2;
	printf("%d - %d = %d", num_1, num_2, result);
}