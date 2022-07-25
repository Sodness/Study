#include <iostream>

int main()
{
	int dan;
	int re;

	std::cout << "¸î ´Ü? ";
	std::cin >> dan;

	std::cout << "\n";

	for (re = 1; re < 10; re++) {
		std::cout << dan << " X " << re << " = " << dan * re << std::endl;
	}

	std::cout << "\n";

	return 0;
}