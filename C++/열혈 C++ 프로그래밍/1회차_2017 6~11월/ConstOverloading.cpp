#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{ }

	SoSimple & AddNum(int n)
	{
		num += n;
		return *this;
	}

	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}

	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple & obj)
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj_1(2);
	const SoSimple obj_2(7);

	obj_1.SimpleFunc();
	obj_2.SimpleFunc();

	YourFunc(obj_1);
	YourFunc(obj_2);

	return 0;
}