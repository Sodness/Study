#include <iostream>
using namespace std;

template <typename T>
class SimpleStaticMem
{
private:
	static T mem;

public:
	void AddMem(int num) { mem += num; }
	void ShowMem() { cout << mem << endl; }
};

template <typename T>
T SimpleStaticMem<T>::mem = 0;

int main(void)
{
	SimpleStaticMem<int> obj_1;
	SimpleStaticMem<int> obj_2;

	obj_1.AddMem(2);
	obj_2.AddMem(3);
	
	obj_1.ShowMem();
	obj_2.ShowMem();

	SimpleStaticMem<long> obj_3;
	SimpleStaticMem<long> obj_4;

	obj_3.AddMem(100);
	obj_4.AddMem(200);

	obj_3.ShowMem();
	obj_4.ShowMem();

	return 0;
}