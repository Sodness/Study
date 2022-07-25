#include <stdio.h>

int main()
{
	int cm_1, cm_2;
	int kg_1, kg_2;

	printf("민수의 키와 몸무게 입력 ");
	scanf_s("%d %d", &cm_1, &kg_1);

	printf("가영이의 키와 몸무게 입력 ");
	scanf_s("%d %d", &cm_2, &kg_2);

	if (cm_1 > cm_2 && kg_1 > kg_2)
		printf("\n1 \n\n");
	else
		printf("\n0 \n\n");
}