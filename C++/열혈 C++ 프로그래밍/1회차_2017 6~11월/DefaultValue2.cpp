#include <iostream>

int Adder(int num_1 = 1, int num_2 = 2);

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num_1, int num_2)
{
	return num_1 + num_2;
}