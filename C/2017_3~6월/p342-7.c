#include <stdio.h>

int func(char ch_1, char ch_2)
{
	int diff;

	if (ch_1 > ch_2)
		diff = ch_1 - ch_2;
	else
		diff = ch_2 - ch_1;

	return diff;
}

int main()
{
	char ch_1, ch_2;
	int diff;

	printf("두 문자를 입력 : ");
	scanf_s(" %c %c", &ch_1, 1, &ch_2, 1);

	diff = func(ch_1, ch_2);

	printf("두 문자의 차이 ==> %d \n\n", diff);
}