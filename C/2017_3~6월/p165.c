#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &ch, 1);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
}