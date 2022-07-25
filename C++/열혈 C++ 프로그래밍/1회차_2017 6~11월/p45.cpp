#include <iostream>

namespace hybrid
{
	void hybfunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace hybrid" << std::endl;
	}
}

int main(void)
{
	using hybrid::hybfunc;
	hybfunc();

	return 0;
}