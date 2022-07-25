#include <stdio.h>

int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	}

	return result;
}

int main()
{
	int res;
	int oper, num_1, num_2;

	printf("계산 입력 (1:+ 2:- 3:* 4:/) : ");
	scanf_s("%d", &oper);

	printf("계산할 두 숫자를 입력 : ");
	scanf_s("%d %d", &num_1, &num_2);

	res = calc(num_1, num_2, oper);

	printf("계산 결과는 : %d\n\n", res);
}