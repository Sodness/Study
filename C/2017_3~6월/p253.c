#include <stdio.h>
#include <string.h>

int main()
{
	char str[4];

	strcpy_s(str, 4,"XYZ");

	printf("문자열 str의 내용 ==> %s \n", str);
}