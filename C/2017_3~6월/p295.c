#include <stdio.h>

int main()
{
	char str[8] = "Basic-C";
	char *p;

	p = str;

	printf("&str[3] ==> %s \n", &str[3]);
	printf("p + 3 ==> %s \n\n", p + 3);

	printf("str[3] ==> %c \n", str[3]);
	printf("*(p + 3) ==> %c \n\n", *(p + 3));
}