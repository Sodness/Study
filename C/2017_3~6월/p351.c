#include <stdio.h>
#include <string.h>

void main()
{
	char password[5] = "5678";
	char input[5];
	int re;

	printf("��й�ȣ 4���ڸ� �Է��ϼ��� : ");
	for (re = 0; re < 4; re++)
		input[re] = getch();

	if (strncmp(password, input, 4) == 0)
	{
		printf("\n��й�ȣ ���~~\n\n");
	}
	else
	{
		printf("\n�Է��� ��й�ȣ ");

		for (re = 0; re < 4; re++)
			putch(input[re]);

		printf(" �� Ʋ����\n\n");
	}
}