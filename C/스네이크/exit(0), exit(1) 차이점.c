#include <stdio.h>

int main(void)
{
	int val;

	printf("===> ");
	scanf_s("%d", &val);

	if (val == 0)
	{
		printf("exit(0) \n\n");
		exit(0);
	}
	exit(1);
}									// 어쩌라는 거지....