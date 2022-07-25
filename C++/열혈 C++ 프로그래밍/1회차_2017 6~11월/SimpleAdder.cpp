#include <iostream>

int main(void)
{
	int val_1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val_1;

	int val_2;
	std::cout << "두 번재 숫자입력: ";
	std::cin >> val_2;

	int result = val_1 + val_2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}