#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int avg;
	}s;

	struct student *p;
	p = &s;

	printf("�̸��� �Է� : ");
	scanf_s("%s", &s.name, 9);
	printf("������ �Է� : ");
	scanf_s("%d", &s.avg);

	printf("\n%s\n", s.name);
	printf("%d\n\n", s.avg);
}