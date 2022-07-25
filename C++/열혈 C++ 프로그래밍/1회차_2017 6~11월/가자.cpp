#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }

	void SetPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPosition() const { cout << '[' << xpos << ", " << ypos << ']' << endl; }
};

template <typename T>
class SmartPtr
{
private:
	T * posptr;

public:
	SmartPtr(T * ptr) : posptr(ptr) { }

	T& operator * () const { return *posptr; }

	T* operator -> () const { return posptr; }

	~SmartPtr() { delete posptr; }
};

int main(void)
{
	SmartPtr<Point> sptr_1(new Point(1, 2));
	SmartPtr<Point> sptr_2(new Point(3, 4));

	sptr_1->ShowPosition();
	sptr_2->ShowPosition();

	sptr_1->SetPos(10, 20);
	sptr_2->SetPos(30, 40);

	sptr_1->ShowPosition();
	sptr_2->ShowPosition();

	return 0;
}