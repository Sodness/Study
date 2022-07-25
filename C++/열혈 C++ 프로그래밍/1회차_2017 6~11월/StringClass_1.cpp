#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	int len;
	char * str;

public:
	String();
	String(const char * s);
	String(const String & s);
	~String();
	String & operator= (const String & s);
	String & operator+= (const String & s);
	bool operator== (const String & s);
	String operator+ (const String & s);

	friend ostream & operator<< (ostream & os, const String & s);
	friend istream & operator>> (istream & is, const String & s);
};

String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char * s)
{
	len = strlen(s) + 1;
	str = new char[len];
	strcpy_s(str, len, s);
}

String::String(const String & s)
{
	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);
}

String::~String()
{
	if (str != NULL)
		delete[] str;
}

String & String::operator= (const String & s)
{
	if (str != NULL)
		delete[] str;

	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);

	return *this;
}

String & String::operator+= (const String & s)
{
	len += (s.len - 1);
	char * tempstr = new char[len];
	
	strcpy_s(tempstr, len, str);
	strcat_s(tempstr, len, s.str);

	if (str != NULL)
		delete[] str;

	str = tempstr;

	return *this;
}

bool String::operator== (const String & s)
{
	return strcmp(str, s.str) ? false : true;
}

String String::operator+ (const String & s)
{
	char * tempstr = new char[len + s.len - 1];

	strcpy_s(tempstr, len + s.len - 1, str);
	strcat_s(tempstr, len + s.len - 1, s.str);

	String temp(tempstr);
	delete[] tempstr;

	return temp;
}

ostream & operator<< (ostream & os, const String & s)
{
	os << s.str;
	return os;
}

istream & operator>> (istream & is, String & s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}

int main(void)
{
	String str_1 = "I like ";
	String str_2 = "string class";
	String str_3 = str_1 + str_2;

	cout << str_1 << endl;
	cout << str_2 << endl;
	cout << str_3 << endl;

	str_1 += str_2;

	if (str_1 == str_3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	String str_4;

	cout << "문자열 입력: ";
	cin >> str_4;
	cout << "입력한 문자열: " << str_4 << endl;

	return 0;
}