#include <stdio.h>

void main()
{
	float num_1, num_2;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &num_1);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &num_2);

	for (; ;) {
		if (num_2 == 0) {
			printf("0���� ������ ���°� ���ݾƿ�. \n");
			printf("�ι�° ����� ���� �Է��Ͻ���! ==> ");
			scanf_s("%f", &num_2);
		}

		if (num_2 != 0)
			break;
	}

	printf("\n");

	printf(" %4.2f + %4.2f = %4.2f \n", num_1, num_2, num_1 + num_2);
	printf(" %4.2f - %4.2f = %4.2f \n", num_1, num_2, num_1 - num_2);
	printf(" %4.2f * %4.2f = %4.2f \n", num_1, num_2, num_1 * num_2);
	printf(" %4.2f / %4.2f = %4.2f \n", num_1, num_2, num_1 / num_2);
	printf(" %d %% %d = %d \n\n", (int)num_1, (int)num_2, (int)num_1 % (int)num_2);
}