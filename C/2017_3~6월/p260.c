#include <stdio.h>

int main()
{
	int num[3][4];

	num[0][0] = 1; num[0][1] = 2; num[0][2] = 3; num[0][3] = 4;
	num[1][0] = 5; num[1][1] = 6; num[1][2] = 7; num[1][3] = 8;
	num[2][0] = 9; num[2][1] = 10; num[2][2] = 11; num[2][3] = 12;

	printf("num[0][0]부터 num[2][3]까지 출력 \n\n");

	printf("%3d %3d %3d %3d \n", num[0][0], num[0][1], num[0][2], num[0][3]);
	printf("%3d %3d %3d %3d \n", num[1][0], num[1][1], num[1][2], num[1][3]);
	printf("%3d %3d %3d %3d \n\n", num[2][0], num[2][1], num[2][2], num[2][3]);
}