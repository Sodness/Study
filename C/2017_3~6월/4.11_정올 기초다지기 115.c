#include <stdio.h>

int main()
{
	int cm_1, cm_2;
	int kg_1, kg_2;

	printf("�μ��� Ű�� ������ �Է� ");
	scanf_s("%d %d", &cm_1, &kg_1);

	printf("�������� Ű�� ������ �Է� ");
	scanf_s("%d %d", &cm_2, &kg_2);

	if (cm_1 > cm_2 && kg_1 > kg_2)
		printf("\n1 \n\n");
	else
		printf("\n0 \n\n");
}