#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf_s("%d %c %d", &a, &ch, 1, &b);

	switch (ch)
	{
		case '+' :
			printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %d �Դϴ�. \n", a, b, a / b);
			break;
		case '%':
			printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
			break;
		default :
			printf("�����ڸ� �߸� �Է��߽��ϴ� \n");
	}
}