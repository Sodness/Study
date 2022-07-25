#include <stdio.h>

int main()
{
	int num_1[100], num_2[100];
	int re;

	for (re = 0; re < 100; re++)
		num_1[re] = re * 2;

	for (re = 0; re < 100; re++)
		num_2[re] = num_1[99 - re];

	printf("num_2[0]ดย %d, num[99]ดย %d ภิทยตส \n", num_2[0], num_2[99]);
}