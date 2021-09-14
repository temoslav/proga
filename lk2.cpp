#include <iostream>

using namespace std;


class FooString
{
	char* buf;

public:
	FooString(char* tbuf);
	~FooString() {};
	int length();
	void show();
	void TEST();
};

void FooString::TEST() {
	int a = 4;
	cout << '\n' << "тест:" << '\n';
	cout << "время теста: " << a << '\n' << "stroka...: ";

	if (length() == a) {
		cout << '\n' << ")";
	}
	else {
		cout << '\n' << "(";
	};
};

FooString::FooString(char* tbuf) {
	this->buf = tbuf;
}


int FooString::length() {
	int i = 0;
	while (buf[i] != '\0') {
		i++;
	};
	cout << i;
	return i;
}


void FooString::show() {
	cout << buf << '\n' << "Длина строки: ";
}




int main() {
	setlocale(LC_ALL, "Russian");
	char str[100] = "4434343434";
	FooString obj1(str);
	obj1.show();
	obj1.length();
	obj1.TEST();
	return 0;
}