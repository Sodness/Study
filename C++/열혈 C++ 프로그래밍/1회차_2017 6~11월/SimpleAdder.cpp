#include <iostream>

int main(void)
{
	int val_1;
	std::cout << "ù ��° �����Է�: ";
	std::cin >> val_1;

	int val_2;
	std::cout << "�� ���� �����Է�: ";
	std::cin >> val_2;

	int result = val_1 + val_2;
	std::cout << "�������: " << result << std::endl;
	return 0;
}