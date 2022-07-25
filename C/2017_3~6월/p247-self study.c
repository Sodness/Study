#include <stdio.h>

int main()
{
	int ary[] = { 10, 20, 30, 40, 50 };
	int cnt;
	int re, hap = 0;

	cnt = sizeof(ary) / sizeof(int);

	printf("배열 ary[]의 요소의 개수는 %d 입니다. \n\n", cnt);

	for (re = 0; re < cnt; re++)
	{
		hap = hap + ary[re];
	}

	printf("ary에 들어 있는 전체 값의 합 ==> %d \n\n", hap);
}