#include <stdio.h>
#include <malloc.h>

int main()
{
	char *p;
	int i;

	p = (char*)calloc(sizeof(char), 3);
	
	for (i = 0; i < 3; i++)
		printf("�Ҵ�� ���� �ʱ갪 p[%d] ==> %d \n", i, p[i]);

	printf("\n");

	free(p);
}