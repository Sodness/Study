#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	}s = { "ȫ�浿", 80, 100 };

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("�л� �̸� ==> %s\n", s.name);
	printf("���� ���� ==> %d\n", s.kor);
	printf("���� ���� ==> %d\n", s.eng);
	printf("��� ���� ==> %3.1f\n\n", s.avg);
}