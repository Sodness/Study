#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1.(자동으로) 뜨거운 물을 준비한다\n");
	printf("# 2.(자동으로) 종이컵을 준비한다\n");

	switch (button)
	{
	case 1: printf("# 3.(자동으로) 보통커피를 탄다\n"); break;
	case 2: printf("# 3.(자동으로) 설탕커피를 탄다\n"); break;
	case 3: printf("# 3.(자동으로) 블랙커피를 탄다\n"); break;
	default: printf("# 3.(자동으로) 아무거나 탄다\n"); break;
	}

	printf("# 4.(자동으로) 물을 붓는다\n");
	printf("# 5.(자동으로) 스푼으로 저어서 녹인다\n\n");

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
		printf("%c님, 어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) ", name);
		scanf_s("%d", &coffee);
		ret = coffee_machine(coffee);
		printf("%c님 커피 여기 있습니다. \n\n", name);

		name = name + 1;
	}
}