#include <stdio.h>

int main()
{
	int num[3] = { 10, 20, 30 };

	printf("&num[0]는 %d, num+0은 %d \n", &num[0], num + 0);
	printf("&num[1]는 %d, num+1은 %d \n", &num[1], num + 1);
	printf("&num[2]는 %d, num+2은 %d \n\n", &num[2], num + 2);
}