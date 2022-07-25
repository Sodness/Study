#include <iostream>
using namespace std;

namespace COMP_POS
{
	enum { CLERK = 1, SENIOR, ASSIST, MANAGER };
}

class NameCard
{
private:
	char *Name;
	char *Company_name;
	char *Phone_number;
	int Position;

public:
	NameCard(char *name, char *company_name, char *phone_number, int position)
		: Name(name), Company_name(company_name), Phone_number(phone_number), Position(position)
	{ }

	void ShowNameCardInfo() const
	{
		cout << "�̸�: " << Name << endl;
		cout << "ȸ��: " << Company_name << endl;
		cout << "��ȭ��ȣ: " << Phone_number << endl;
		cout << "����: " << Position << endl << endl;
	}
};

int main(void)
{
	NameCard man("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	man.ShowNameCardInfo();

	return 0;
}