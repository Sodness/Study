#include <iostream>

int main()
{
	char name[10];
	char phone[20];

	std::cout << "�̸��� �˷��ּ���: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ�� �˷��ּ���: ";
	std::cin >> phone;

	std::cout << "\n" << name << "���� ��ȭ��ȣ�� " << phone << "�Դϴ�. \n\n";

	return 0;
}