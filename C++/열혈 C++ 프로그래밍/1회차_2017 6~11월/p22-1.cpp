#include <iostream>

int main()
{
	int  num_1, num_2, num_3, num_4, num_5;
	int result;

	std::cout << "1번째 정수 입력: ";
	std::cin >> num_1;
	std::cout << "2번째 정수 입력: ";
	std::cin >> num_2;
	std::cout << "3번째 정수 입력: ";
	std::cin >> num_3;
	std::cout << "4번째 정수 입력: ";
	std::cin >> num_4;
	std::cout << "5번째 정수 입력: ";
	std::cin >> num_5;

	result = num_1 + num_2 + num_3 + num_4 + num_5;
	std::cout << "\n합계: " << result << "\n\n";

	return 0;
}