#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;

public:
	SoBase() : baseNum(20)
	{
		cout << "SoBase()" << endl;
	}

	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}

	void ShowBaseData()
	{
		cout << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;

public:
	SoDerived() : derivNum(30)
	{
		cout << "SoDerived()" << endl;
	}

	SoDerived(int n) : derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}

	SoDerived(int n_1, int n_2) : SoBase(n_1), derivNum(n_2)
	{
		cout << "SoDerived(int n_1, int n_2)" << endl;
	}

	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void)
{
	cout << "case_1..... " << endl;
	SoDerived dr_1;
	dr_1.ShowDerivData();
	
	cout << "-----------------------" << endl;
	cout << "case_2....." << endl;
	SoDerived dr_2(12);
	dr_2.ShowDerivData();

	cout << "-----------------------" << endl;
	cout << "case_3....." << endl;
	SoDerived dr_3(23, 24);
	dr_3.ShowDerivData();

	return 0;
}