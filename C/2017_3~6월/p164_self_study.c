#include <stdio.h>

int main()
{
	int year;

	printf("����⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &year);

	if (year % 12 == 0)
		printf("�����̶�\n");
	else
		if (year % 12 == 1)
			printf("�߶�\n");
		else
			if (year % 12 == 2)
				printf("����\n");
			else
				if (year % 12 == 3)
					printf("������\n");
				else
					if (year % 12 == 4)
						printf("���\n");
					else
						if (year % 12 == 5)
							printf("�Ҷ�\n");
						else
							if (year % 12 == 6)
								printf("ȣ���̶�\n");
							else
								if (year % 12 == 7)
									printf("�䳢��\n");
								else
									if (year % 12 == 8)
										printf("���\n");
									else
										if (year % 12 == 9)
											printf("���\n");
										else
											if (year % 12 == 10)
												printf("����\n");
											else
													printf("���\n");

}