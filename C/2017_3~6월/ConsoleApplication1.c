#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[10];
	int size;

	scanf_s("%s", str_1, 10);

	size = strlen(str_1);

	printf("%d", size);
}