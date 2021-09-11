#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned char c;
	cout << "¬ведите первую букву вашего имени";
	cin >> c;
	c = getchar();

	cout << "¬ведите количество вариантов" << endl;
	unsigned int a;
	cin >> a;
	cout << "¬аш вариант: "<<(c%a)+1;
	return 0;
}