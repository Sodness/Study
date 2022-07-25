#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}

	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA &ref;
	const int &num;

public:
	BBB(AAA &r, const int &n)
		: ref(r), num(n)
	{
	}

	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl << endl;
	}
};

int main(void)
{
	AAA obj_1;
	BBB obj_2(obj_1, 20);

	obj_2.ShowYourName();

	return 0;
}