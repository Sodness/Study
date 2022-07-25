#include <iostream>
using namespace std;

class Study
{
private:
	int num;
public:
	Study * FirstFunc(int val)
	{
		val += 10;
		num = val;
		return this;
	}

	void ShowNum()
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	class Study FeelingGood;
	int val = 5;

	FeelingGood.FirstFunc(val);

	FeelingGood.ShowNum();

	return 0;
}