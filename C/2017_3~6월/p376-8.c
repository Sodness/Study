#include <stdio.h>
#include <string.h>

void main()
{
	char pass_1[4], pass_2[4];
	int re;

	printf("새로운 비밀번호 4글자 입력 : ");
	for (re = 0; re < 4; re++)
	{
		pass_1[re] = getch();
		putch('*');
	}
	//pass_1[re] = '\0';
	
	printf("\n동일하게 다시 4글자 입력 : ");
	for (re = 0; re < 4; re++)
	{
		pass_2[re] = getch();
		putch('*');
	}
	//pass_2[re] = '\0';

	if (strcmp(pass_1, pass_2) == 0)
		printf("\n비밀번호 생성~~\n\n");
	else
		printf("\n비밀번호가 다름!! \n\n");

	printf("%s	%s", pass_1, pass_2);
}