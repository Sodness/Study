#include <stdio.h>

void main()
{
	struct person {
		char name[10];
		union id {
			char jumin[15];
			char phone[15];
		}id;
	}p1;

	printf("이름 --> ");
	scanf_s("%s", p1.name, 9);

	printf("전화번호 또는 주민번호 --> ");
	scanf_s("%s", p1.id.jumin, 15);

	printf("\n--- 구조체/공용체 혼합 활용 ---\n");
	printf("이름 ==> %s\n", p1.name);
	printf("전화번호/주민번호 ==> %s\n\n", p1.id.jumin);

}