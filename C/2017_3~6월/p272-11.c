#include <stdio.h>

int main()
{
	int cc[] = { 100, 200, 300, 400, 500 };
	int len;

	len = sizeof(cc) / sizeof(int);

	printf("배열 cc[]의 요소의 개수는 %d 입니다. \n\n", len);
}