#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned char c;
	cout << "������� ������ ����� ������ �����";
	cin >> c;
	c = getchar();

	cout << "������� ���������� ���������" << endl;
	unsigned int a;
	cin >> a;
	cout << "��� �������: "<<(c%a)+1;
	return 0;
}