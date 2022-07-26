#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char * name;
	int age;

public:
	Person(char * myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];

		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�" << name << endl;
		cout << "����" << age << endl;
	}
	
	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man_1("Lee dong woo", 29);
	Person man_2("Yoon ji yul", 22);

	man_2 = man_1;

	man_1.ShowPersonInfo();
	man_2.ShowPersonInfo();

	return 0;
}