#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ������ ���� �Ͻÿ�.

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", rand() % 10);
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", rand() % 10);
	}
	// �Ȱ��� �Լ��� �ι� ���ȴµ� ������� �ٸ��� => �õ尪�� �޶� ����?

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		srand(5);						// �õ尪�� 5�� ������ 
		printf("%d \n", rand() % 10);
	}
	// �� 12367954 % 10 == 4

	printf("\n");

	srand(10);						// �õ尪�� 10���� ������
	for (int i = 0; i < 3; i++)
	{						
		printf("%d \n", rand() % 10);
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		srand((unsigned)time(NULL)); // -> �ǽð����� ���� ��ȭ�ϴ� ��
		printf("%d \n", rand() % 10);
	}

	return 0;
}