#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	friend void SwapData();
};

template <class T>

void SwapData(T & p_1, T & p_2)
{
	T tmp;

	tmp = p_1;
	p_1 = p_2;
	p_2 = tmp;
}

int main(void)
{
	Point pos_1(3, 4);
	Point pos_2(10, 20);

	SwapData(pos_1, pos_2);

	pos_1.ShowPosition();
	pos_2.ShowPosition();

	return 0;
}