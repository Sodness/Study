#include <stdio.h>

int main()
{
	int num_1 = 1, num_2;

	while (1)
	{
		printf("���� �� �� �Է� <���߷��� 0�� �Է�> : ");
		scanf_s("%d %d", &num_1, &num_2);

		if (num_1 == 0)
			break;

		printf("%d + %d = %d \n", num_1, num_2, num_1 + num_2);
	}

	printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�.");
}