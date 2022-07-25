#include <stdio.h>
#include <malloc.h>

void main()
{
	int *p_1, *p_2;
	int re_1, re_2;

	printf("malloc< > 함수 사용\n");
	
	p_1 = (int*) malloc(sizeof(int) * 3);

	for (re_1 = 0; re_1 < 3; re_1++)
	{
		printf("할당된 곳의 초기값 p[%d] ==> %d\n",re_1, p_1[re_1]);
	}
	printf("\n");

	free(p_1);

	printf("calloc< > 함수 사용\n");

	p_2 = (int*) calloc(sizeof(int) , 3);

	for (re_1 = 0; re_1 < 3; re_1++)
	{
		printf("할당된 곳의 초기값 p[%d] ==> %d\n", re_1, p_2[re_1]);
	}
	printf("\n");

	free(p_2);
}