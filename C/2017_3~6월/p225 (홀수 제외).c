#include <stdio.h>

int main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			continue;

		hap += i;
	}

	printf(" 1~100������ ��(Ȧ�� ����): %d\n\n", hap);
}