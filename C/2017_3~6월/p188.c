#include <stdio.h>

int main()
{
	int re, sum = 0;
	int num_1, num_2, num_3;

	printf("시작값, 끝값, 증가값 입력 : ");
	scanf_s("%d %d %d", &num_1, &num_2, &num_3);

	for (re = num_1; re <= num_2; re = re + num_3)
		sum = sum + re;

	printf("%d에서 %d까지 %d씩 증가한 값의 합: %d \n\n", num_1, num_2, num_3, sum);
}