#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 여러번 실행 하시오.

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", rand() % 10);
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d \n", rand() % 10);
	}
	// 똑같은 함수를 두번 돌렸는데 결과값이 다르다 => 시드값이 달라 졌다?

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		srand(5);						// 시드값이 5로 고정됨 
		printf("%d \n", rand() % 10);
	}
	// 예 12367954 % 10 == 4

	printf("\n");

	srand(10);						// 시드값이 10으로 고정됨
	for (int i = 0; i < 3; i++)
	{						
		printf("%d \n", rand() % 10);
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		srand((unsigned)time(NULL)); // -> 실시간으로 값이 변화하는 중
		printf("%d \n", rand() % 10);
	}

	return 0;
}