#include <iostream>
using namespace std;

class First
{
private:
	char * strOne;

public:
	First(char * str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[] strOne;
	}
};

class Second : public First
{
private:
	char * strTwo;

public:
	Second(char * str_1, char * str_2) : First(str_1)
	{
		strTwo = new char[strlen(str_2) + 1];
	}

	~Second()
	{
		cout << "~Second()" << endl;
		delete[] strTwo;
	}
};

int main(void)
{
	First * ptr = new Second("simple", "complex");

	delete ptr;

	return 0;
}