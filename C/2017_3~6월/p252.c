#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "XYZ";
	int len;

	len = strlen(str);

	printf("문자열 \"%s\"의 길이 ==> %d \n", str, len);
}