#include <iostream>

int main()
{
	int money;

	for (; ;) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> money;

		if (money == -1) {
			std::cout << "���α׷��� �����մϴ�. \n\n";
			break;
		}

		std::cout << "�̹� �� �޿�: " << 50 + money * 0.12 << "���� \n\n";
	}
}