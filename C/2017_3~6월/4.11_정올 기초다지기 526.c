#include <stdio.h> //��������� �����Ѵ�

int main() //������ ���ϰ����� �����Ѵ�
{
	float num_1, num_2; //num_1, num_2�� �Ǽ��� �����Ѵ�
	float result_1; //result_1�� �Ǽ��� �����Ѵ�

	scanf_s("%f %f", &num_1, &num_2); //�Ǽ� num_1, num_2�� �Է¹޴´�
	
	result_1 = num_1 * num_2; //num_1 * num_2�� ���� result_1�� �����Ѵ�
	printf("\n%d ", (int)result_1); // result_1�� ������ ������ȯ ���� ����Ѵ�

	printf("%d \n\n", (int)num_1 * (int)num_2); //num_1, num_2�� ������ ������ȯ ���� ���� ���� ����Ѵ�
}