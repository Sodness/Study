#include <stdio.h>

int main()
{
	int num_1[] = { 10, 20, 30, 40, 50 };
	int count;

	count = sizeof(num_1) / sizeof(int);

	printf("배열 num_1[]의 요소의 개수는 %d 입니다. \n", count);
}