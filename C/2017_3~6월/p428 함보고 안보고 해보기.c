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

	printf("�̸� --> ");
	scanf_s("%s", p1.name, 9);

	printf("��ȭ��ȣ �Ǵ� �ֹι�ȣ --> ");
	scanf_s("%s", p1.id.jumin, 15);

	printf("\n--- ����ü/����ü ȥ�� Ȱ�� ---\n");
	printf("�̸� ==> %s\n", p1.name);
	printf("��ȭ��ȣ/�ֹι�ȣ ==> %s\n\n", p1.id.jumin);

}