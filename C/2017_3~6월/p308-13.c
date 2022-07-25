#include <stdio.h>
#include <string.h>

int main()
{
	char str[19];
	char *p;
	int re;
	int count;
	
	p = str;

	printf("글자를 입력<20자 미만> : ");
	scanf_s("%s", str, 19);

	//count = sizeof(str) / sizeof(char);
	count = strlen(str);

	for (re = count - 1; re >= 0; re--)
	{
		printf("%c", *(p + re));
	}

	printf("\n\n");

	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str[0]));
	printf("%d\n\n", sizeof(char));
}