#include <stdio.h>

int main()
{
	int num_1, num_2;
	int *p_1, *p_2;
	int tmp;

	printf("num_1 값 입력 : ");
	scanf_s("%d", &num_1);

	printf("num_2 값 입력 : ");
	scanf_s("%d", &num_2);

	p_1 = &num_1;
	p_2 = &num_2;

	tmp = *p_1;
	*p_1 = *p_2;
	*p_2 = tmp;

	printf("\n바뀐 값 num_1은 %d, num_2는 %d \n\n", *p_1, *p_2);
}