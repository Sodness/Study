#include <stdio.h>

int main()
{
	int num_1, num_2;
	char cclt;

	while (1)
	{
		printf("����� �� ���� �Է� <���߷��� Ctrl+C> : ");
		scanf_s("%d %d", &num_1, &num_2);

		printf("����� �����ڸ� �Է��ϼ��� : ");
		scanf_s(" %c", &cclt, 1);
		switch (cclt)
		{
		case '+': printf("%d + %d = %d �Դϴ�. \n", num_1, num_2, num_1 + num_2); break;
		case '-': printf("%d - %d = %d �Դϴ�. \n", num_1, num_2, num_1 - num_2); break;
		case '*': printf("%d * %d = %d �Դϴ�. \n", num_1, num_2, num_1 * num_2); break;
		case '/': printf("%d / %d = %d �Դϴ�. \n", num_1, num_2, num_1 / num_2); break;
		case '%': printf("%d % %d = %d �Դϴ�. \n", num_1, num_2, num_1 % num_2); break;
		default: printf("�߸��Է��߽��ϴ�. \n");
		}
	}
}