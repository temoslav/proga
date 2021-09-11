
#include <iostream>
#include "strutil.h"
using namespace std;

int main ()
{
	char str1[300], str2[400];

	std::cout << "Enter first string and second." << std::endl;
	std::cin >> str2 >> str1;
	std::cout << strConteins(str1, str2);
	return 0;
}