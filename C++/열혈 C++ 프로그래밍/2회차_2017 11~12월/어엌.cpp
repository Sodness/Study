#include <stdio.h>
int main()
{
	int i;
	char d[30];
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("\'%c\'\n", d[i]);
	}
	return 0;
}
