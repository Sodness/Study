#include <stdio.h>

int main()
{
	int hour, minute, second;

	printf("## ����� �ʴ� ? ");
	scanf_s("%d", &second);

	hour = second / 3600;
	second = second % 3600;

	minute = second / 60;
	second = second % 60;

	printf("\n�ð��� ==> %d �ð� \n", hour);
	printf("���� ==> %d �� \n", minute);
	printf("�ʴ� ==> %d �� \n \n", second);
}