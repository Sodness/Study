#include <iostream>

template <typename T>
inline T square(T x)
{
	return x * x;
}

int main(void)
{
	std::cout << square(5.5) << std::endl;
	std::cout << square(12) << std::endl;

	return 0;
}