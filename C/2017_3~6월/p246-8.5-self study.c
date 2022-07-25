#include <stdio.h>

int main()
{
	int ary_1[100], ary_2[100];
	int re;

	for (re = 0; re < 100; re++)
	{
		ary_1[re] = re * 2;
	}

	for (re = 0; re < 100; re++)
	{
		ary_2[re] = ary_1[(50 + re) % 100];
	}

	printf("ary_2[0]Àº %d, ary_2[99]´Â %d ÀÔ·ÂµÊ \n\n", ary_2[0], ary_2[99]);
}