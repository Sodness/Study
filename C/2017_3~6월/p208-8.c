#include <stdio.h>

int main()
{
	int i;
	int odd_hap; // Ȧ���� �հ� ����
	int even_hap; //¦���� �հ� ����

	even_hap = 0;
	odd_hap = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			even_hap = even_hap + i;
		else
			odd_hap = odd_hap + i;
	}

	printf(" Ȧ���� ��: %d \n", odd_hap);
	printf(" ¦���� ��: %d \n", even_hap);
}