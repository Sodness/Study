#include <stdio.h>

int main()
{
	int num[3] = { 10, 20, 30 };

	printf("&num[0]�� %d, num+0�� %d \n", &num[0], num + 0);
	printf("&num[1]�� %d, num+1�� %d \n", &num[1], num + 1);
	printf("&num[2]�� %d, num+2�� %d \n\n", &num[2], num + 2);
}