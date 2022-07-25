#include <stdio.h>

int main()
{
	int re_1;

	for (re_1 = 0; re_1 <= 127; re_1++)
	{ 
		if (re_1 % 16 == 0)
		{
			printf("-------------------- \n");
			printf("10진수  16진수  문자 \n");
			printf("-------------------- \n");
			printf("%5d %5x %5c \n", re_1, re_1, re_1);
		}
		else
			printf("%5d %5x %5c \n", re_1, re_1, re_1);
	}	
}