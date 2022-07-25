#include <iostream>

int main()
{
	char name[10];
	char phone[20];

	std::cout << "이름을 알려주세요: ";
	std::cin >> name;
	std::cout << "전화번호좀 알려주세요: ";
	std::cin >> phone;

	std::cout << "\n" << name << "씨의 전화번호는 " << phone << "입니다. \n\n";

	return 0;
}