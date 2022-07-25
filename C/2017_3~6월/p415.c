#include <stdio.h>
#include <string.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s[3];
	int re;

	strcpy_s(s[0].name, 9, "Kim");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

	strcpy_s(s[1].name, 9, "Lee");
	s[1].kor = 70;
	s[1].eng = 60;
	s[1].avg = (s[0].kor + s[0].eng) / 2.0f;

	strcpy_s(s[2].name, 9, "Park");
	s[2].kor = 50;
	s[2].eng = 40;
	s[2].avg = (s[0].kor + s[0].eng) / 2.0f;

	for (re = 0; re < 3; re++)
	{
		printf("학생 이름 ==> %s\n", s[re].name);
		printf("국어 점수 ==> %d\n", s[re].kor);
		printf("영어 점수 ==> %d\n", s[re].eng);
		printf("평균 점수 ==> %3.1f\n\n", s[re].avg);
	}
}