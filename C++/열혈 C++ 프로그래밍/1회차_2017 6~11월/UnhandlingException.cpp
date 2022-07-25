#include <iostream>
using namespace std;

int main(void)
{
	int num_1, num_2;
	cout << "µÎ °³ÀÇ ¼ıÀÚ ÀÔ·Â: ";
	cin >> num_1 >> num_2;

	cout << "³ª´°¼ÀÀÇ ¸ò: " << num_1 / num_2 << endl;
	cout << "³ª´°¼ÀÀÇ ³ª¸ÓÁö: " << num_1 % num_2 << endl << endl;

	return 0;
}