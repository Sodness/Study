#include <stdio.h>

int main()
{
	int re;

	for (re = 1; re <= 100; re++)
	{
		printf("for문을 %d회 실행했습니다. \n", re);
		break;
	}

	printf("for문을 종료했습니다. \n");
}