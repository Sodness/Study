#include <stdio.h>

int main()
{
	int hap = 0;
	int i;

	i = 1;
	while (i <= 100)
	{
		hap = hap + i;

		if (hap >= 1000)
			break;

		i++;
	}

	printf(" 1~100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d\n\n", i);
}