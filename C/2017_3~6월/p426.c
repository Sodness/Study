#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};

	struct student *s;
	int cnt, re;

	printf("입력할 학생 수 : ");
	scanf_s("%d", &cnt);

	s = (struct student*)malloc(sizeof(struct student) * cnt);

	for (re = 0; re < 3; re++)
	{
		printf("이름과 나이 입력 : ");
		scanf_s("%s %d", s[re].name, 9, &s[re].age);
	}

	printf("\n-- 학생 명단 --\n");
	for (re = 0; re < 3; re++)
	{
		printf("이름:%s , 나이:%d\n", s[re].name, s[re].age);
	}
	printf("\n");

	free(s);
}