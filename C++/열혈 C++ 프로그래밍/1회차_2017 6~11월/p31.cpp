#include <iostream>

int BoxVolme(int length, int width = 1, int height = 1);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolme(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolme(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolme(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolme() << std::endl;

	return 0;
}

int BoxVolme(int length, int width, int height)
{
	return length * width * height;
}