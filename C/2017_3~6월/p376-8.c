#include <stdio.h>
#include <string.h>

void main()
{
	char pass_1[4], pass_2[4];
	int re;

	printf("���ο� ��й�ȣ 4���� �Է� : ");
	for (re = 0; re < 4; re++)
	{
		pass_1[re] = getch();
		putch('*');
	}
	//pass_1[re] = '\0';
	
	printf("\n�����ϰ� �ٽ� 4���� �Է� : ");
	for (re = 0; re < 4; re++)
	{
		pass_2[re] = getch();
		putch('*');
	}
	//pass_2[re] = '\0';

	if (strcmp(pass_1, pass_2) == 0)
		printf("\n��й�ȣ ����~~\n\n");
	else
		printf("\n��й�ȣ�� �ٸ�!! \n\n");

	printf("%s	%s", pass_1, pass_2);
}