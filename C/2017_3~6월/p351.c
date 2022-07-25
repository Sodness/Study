#include <stdio.h>
#include <string.h>

void main()
{
	char password[5] = "5678";
	char input[5];
	int re;

	printf("비밀번호 4글자를 입력하세요 : ");
	for (re = 0; re < 4; re++)
		input[re] = getch();

	if (strncmp(password, input, 4) == 0)
	{
		printf("\n비밀번호 통과~~\n\n");
	}
	else
	{
		printf("\n입력한 비밀번호 ");

		for (re = 0; re < 4; re++)
			putch(input[re]);

		printf(" 가 틀렸음\n\n");
	}
}