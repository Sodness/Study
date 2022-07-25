#include <iostream>
using namespace std;

typedef struct Data
{
	int data;
	void (*ShowData)(Data*);
	void (*Add)(Data*, int);
} Data;

void ShowData(Data* THIS) { cout << "Data: " << THIS->data << endl; }
void Add(Data* THIS, int num) { THIS->data += num; }

int main(void)
{
	Data obj_1 = { 15, ShowData, Add };
	Data obj_2 = { 7, ShowData, Add };

	obj_1.Add(&obj_1, 17);
	obj_2.Add(&obj_2, 9);

	obj_1.ShowData(&obj_1);
	obj_2.ShowData(&obj_2);

	return 0;
}