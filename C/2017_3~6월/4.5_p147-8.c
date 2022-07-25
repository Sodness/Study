#include <stdio.h>

int main()
{
	int hour, minute, second;

	printf("## 계산할 초는 ? ");
	scanf_s("%d", &second);

	hour = second / 3600;
	second = second % 3600;

	minute = second / 60;
	second = second % 60;

	printf("\n시간은 ==> %d 시간 \n", hour);
	printf("분은 ==> %d 분 \n", minute);
	printf("초는 ==> %d 초 \n \n", second);
}