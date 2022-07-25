#include <stdio.h>

int main()
{
	int i;
	int odd_hap; // 홀수의 합계 변수
	int even_hap; //짝수의 합계 변수

	even_hap = 0;
	odd_hap = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			even_hap = even_hap + i;
		else
			odd_hap = odd_hap + i;
	}

	printf(" 홀수의 합: %d \n", odd_hap);
	printf(" 짝수의 합: %d \n", even_hap);
}