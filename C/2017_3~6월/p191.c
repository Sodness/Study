#include <stdio.h>

int main()
{
	int re_1, re_2;

	for (re_1 = 0; re_1 <= 2; re_1++)
		for (re_2 = 0; re_2 <= 1; re_2++)
			printf("중첩 for문입니다. <re_1값: %d, re_2값: %d> \n", re_1, re_2);
	
	printf("\n");
}