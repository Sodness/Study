#include <stdio.h>

int main()
{
	int cc[] = { 100, 200, 300, 400, 500 };
	int len;

	len = sizeof(cc) / sizeof(int);

	printf("�迭 cc[]�� ����� ������ %d �Դϴ�. \n\n", len);
}