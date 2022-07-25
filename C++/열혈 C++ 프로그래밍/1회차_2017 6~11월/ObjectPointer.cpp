#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	Person * ptr_1 = new Student();
	Person * ptr_2 = new PartTimeStudent();
	Student * ptr_3 = new PartTimeStudent();

	ptr_1 -> Sleep();
	ptr_2 -> Sleep();
	ptr_3 -> Study();

	delete ptr_1;
	delete ptr_2;
	delete ptr_3;

	return 0;
}