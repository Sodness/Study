#include <stdio.h>

int main()
{
	int i;
	int hap = 0;

	for (i = 1; i <= 1000; i++)
	{
		if (i % 3 == 0 || i % 7 == 0)
			hap = hap + i;
	}

	printf("3�� ��� �Ǵ� 7�� ����� ��: %d \n", hap);
}