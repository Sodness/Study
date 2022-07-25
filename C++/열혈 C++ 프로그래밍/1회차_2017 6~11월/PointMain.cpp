#include <iostream>
#include "PointTemplate.cpp"
using namespace std;

int main(void)
{
	Point<int> pos_1(3, 4);
	pos_1.ShowPosition();

	Point<double> pos_2(2.4, 3.6);
	pos_2.ShowPosition();

	Point<char> pos_3('P', 'F');
	pos_3.ShowPosition();

	return 0;
}