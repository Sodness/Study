#include <stdio.h>

void main()
{
	int num_1, num_2;
	char ccl;

	printf("ù��° ����� �� ==> ");
	scanf_s("%d", &num_1);

	printf("+ - * / ==> ");
	scanf_s(" %c", &ccl, 1);

	printf("�ι�° ����� �� ==> ");
	scanf_s("%d", &num_2);

	printf("\n");

	if (ccl == '+')
		printf("%d + %d = %d", num_1, num_2, num_1 + num_2);

	if (ccl == '-')
		printf("%d - %d = %d", num_1, num_2, num_1 - num_2);

	if (ccl == '*')
		printf("%d * %d = %d", num_1, num_2, num_1 * num_2);

	if (ccl == '/') {
		if (num_2 != 0)
			printf("%d / %d = %d", num_1, num_2, num_1 / num_2);
	
		if (num_2 == 0)
			printf("0���� ������ �ȵ˴ϴ�.");
	}

	printf("\n\n");
}