#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;

	printf("�̸� : ");
	scanf_s("%s", s.name, 9);

	printf("���� ���� : ");
	scanf_s("%d", &s.kor);

	printf("���� ���� : ");
	scanf_s("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n--- ����ü Ȱ�� ---\n");
	printf("�л� �̸� ==> %s\n", s.name);
	printf("���� ���� ==> %d\n", s.kor);
	printf("���� ���� ==> %d\n", s.eng);
	printf("��� ���� ==> %3.1f\n\n", s.avg);
}