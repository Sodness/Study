#include <stdio.h>

int main()
{
	int num;

	printf("처리할 수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("입력한 수는 + 입니다. \n");
	else
		if (num == 0)
			printf("입력한 수는 0 입니다. \n");
		else
			printf("입력한 수는 - 입니다. \n");
}