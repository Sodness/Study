#include <stdio.h>

int main()
{
	int re;
	int sum;
	
	sum = 0;

	for (re = 1; re <= 100; re++)
	{
		sum += re;

		if (sum > 2000)
			goto outside;
	}

outside:
	printf("1���� %d���� ���ϸ� 2000�� �Ѿ��. \n", re);
}