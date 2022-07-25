#include <iostream>

int main(void)
{
	int num, i;
	
	std::cout << "±¸±¸´Ü: ";
	std::cin >> num;
	std::cout << std::endl;

	for (i = 1; i < 10; i++)
	{
		std::cout << num << '*' << i << '=' << num*i << std::endl;
	}

	std::cout << std::endl;
	return 0;
}