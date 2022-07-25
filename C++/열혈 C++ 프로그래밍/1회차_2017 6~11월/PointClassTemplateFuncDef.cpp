#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0);
	void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) { }

template <typename T>
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}

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