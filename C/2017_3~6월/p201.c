#include <stdio.h>

int main()
{
	int num_1, num_2;
	int re;

	for (re = 100; ; )
	{
		printf("���� �� �� �Է� <���߷��� Ctrl+C> : ");
		scanf_s("%d %d", &num_1, &num_2);
		printf("%d + %d = %d \n\n", num_1, num_2, num_1 + num_2);
	}
}