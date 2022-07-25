#include <stdio.h>
#include <string.h>

int main()
{
	char ss1[20];
	char ss2[20];
	char ss3[40] = "";
	int r1, r2;

	puts(ss1);
	puts(ss3);

	puts("문자열 1을 입력하세요.");
	gets_s(ss1, 20);
	puts("문자열 2을 입력하세요.");
	gets_s(ss2, 20);

	strcat_s(ss3, 40, ss1);
	strcat_s(ss3, 40, ss2);

	printf("합쳐진 문자열 ==> %s \n", ss3);

	r1 = strlen(ss1);
	r2 = strlen(ss2);

	printf("문자열 1 길이 ==> %d \n", r1);
	printf("문자열 2 길이 ==> %d \n", r2);

	if (strcmp(ss1, ss2) == 0)
		puts("두 문자열은 같다. \n\n");
	else
		puts("두 문자열은 다르다. \n\n");
}