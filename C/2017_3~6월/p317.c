#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1.(�ڵ�����) �߰ſ� ���� �غ��Ѵ�\n");
	printf("# 2.(�ڵ�����) �������� �غ��Ѵ�\n");

	switch (button)
	{
	case 1: printf("# 3.(�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
	case 2: printf("# 3.(�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
	case 3: printf("# 3.(�ڵ�����) ��Ŀ�Ǹ� ź��\n"); break;
	default: printf("# 3.(�ڵ�����) �ƹ��ų� ź��\n"); break;
	}

	printf("# 4.(�ڵ�����) ���� �״´�\n");
	printf("# 5.(�ڵ�����) ��Ǭ���� ��� ���δ�\n\n");

	return 0;
}

int main()
{
	int coffee;
	int ret;
	int re;
	char name;

	name = 'A';

	for (re = 0; re < 3; re++)
	{
		printf("%c��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��) ", name);
		scanf_s("%d", &coffee);
		ret = coffee_machine(coffee);
		printf("%c�� Ŀ�� ���� �ֽ��ϴ�. \n\n", name);

		name = name + 1;
	}
}