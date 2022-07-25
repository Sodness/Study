#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[20];
	char str_2[20];
	int r1, r2;

	puts("첫번째 문자열을 입력하세요.");
	gets_s(str_1, 20);

	puts("두번째 문자열을 입력하세요.");
	gets_s(str_2, 20);

	r1 = strlen(str_1);
	r2 = strlen(str_2);

	printf("첫번째 문자열의 길이 ==> %d \n", r1);
	printf("두번째 문자열의 길이 ==> %d \n", r2);

	if (strcmp(str_1, str_2) == 0)
		puts("두 문자열의 내용이 같습니다. \n\n");
	else
		puts("두 문자열의 내용이 다릅니다. \n\n");
}