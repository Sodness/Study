#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[] = "XYZ";
	char str_2[] = "xyz";
	int r;

	r = strcmp(str_1, str_2);

	printf("두 문자열의 비교결과 ==> %d \n\n", r);
}