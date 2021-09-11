#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned char c;
	cout << "Ââåäèòå ïåðâóþ áóêâó âàøåãî èìåíè";
	cin >> c;
	c = getchar();

	cout << "Ââåäèòå êîëè÷åñòâî âàðèàíòîâ" << endl;
	unsigned int a;
	cin >> a;
	cout << "Âàø âàðèàíò: "<<(c%a)+1;
	return 0;
}
