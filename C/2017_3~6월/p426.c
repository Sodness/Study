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

	printf("�Է��� �л� �� : ");
	scanf_s("%d", &cnt);

	s = (struct student*)malloc(sizeof(struct student) * cnt);

	for (re = 0; re < 3; re++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf_s("%s %d", s[re].name, 9, &s[re].age);
	}

	printf("\n-- �л� ��� --\n");
	for (re = 0; re < 3; re++)
	{
		printf("�̸�:%s , ����:%d\n", s[re].name, s[re].age);
	}
	printf("\n");

	free(s);
}