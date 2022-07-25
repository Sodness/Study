#include <iostream>

int main(void)
{
	int val_1, val_2;
	int result = 0;
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val_1 >> val_2;

	if (val_1 < val_2)
	{
		for (int i = val_1 + 1; i < val_2; i++)
			result += i;
	}
	else
	{
		for (int i = val_2 + 1; i < val_1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}