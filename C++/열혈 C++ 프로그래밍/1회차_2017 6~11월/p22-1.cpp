#include <iostream>

int main()
{
	int  num_1, num_2, num_3, num_4, num_5;
	int result;

	std::cout << "1��° ���� �Է�: ";
	std::cin >> num_1;
	std::cout << "2��° ���� �Է�: ";
	std::cin >> num_2;
	std::cout << "3��° ���� �Է�: ";
	std::cin >> num_3;
	std::cout << "4��° ���� �Է�: ";
	std::cin >> num_4;
	std::cout << "5��° ���� �Է�: ";
	std::cin >> num_5;

	result = num_1 + num_2 + num_3 + num_4 + num_5;
	std::cout << "\n�հ�: " << result << "\n\n";

	return 0;
}