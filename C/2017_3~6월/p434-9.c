#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	}s = { "홍길동", 80, 100 };

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("학생 이름 ==> %s\n", s.name);
	printf("국어 점수 ==> %d\n", s.kor);
	printf("영어 점수 ==> %d\n", s.eng);
	printf("평균 점수 ==> %3.1f\n\n", s.avg);
}