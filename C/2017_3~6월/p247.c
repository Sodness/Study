#include <stdio.h>

int main()
{
	int num_1[] = { 10, 20, 30, 40, 50 };
	int count;

	count = sizeof(num_1) / sizeof(int);

	printf("�迭 num_1[]�� ����� ������ %d �Դϴ�. \n", count);
}