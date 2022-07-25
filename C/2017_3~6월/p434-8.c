#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int avg;
	}s;

	struct student *p;
	p = &s;

	printf("이름을 입력 : ");
	scanf_s("%s", &s.name, 9);
	printf("점수를 입력 : ");
	scanf_s("%d", &s.avg);

	printf("\n%s\n", s.name);
	printf("%d\n\n", s.avg);
}