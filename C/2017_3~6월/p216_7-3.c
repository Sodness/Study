#include <stdio.h>

int main()
{
	int num_1, num_2;

	while (1)
	{
		printf("���� �� �� �Է� <���߷��� Ctrl+C> : ");
		scanf_s("%d %d", &num_1, &num_2);
		printf("%d + %d = %d \n", num_1, num_2, num_1 + num_2);
	}
}