#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y) { }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

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