#include <iostream>
#include <fstream>
#include <memory>
#include <conio.h>
#include <Windows.h>
#include <string>
using namespace std;
/*Задание к лекции 6.2 Реализовать свой шаблонный класс для умного указателя
и программу для демонстрации, что он работает.
*/
template <typename T>
class SmartPointer {
public:
	SmartPointer(T *ptr) {
		this->ptr = ptr;
	}
	~SmartPointer()
	{
		delete ptr;
	}
		T& operator*() {
		return *ptr;
	}
		T* operator->()
		{
			return ptr;
		}
private:
	T* ptr;
};

class test
{
private:
	int pone;
	int ptwo;
public:
	test(int two , int one)
	{
		pone = one;
	    ptwo = two;
	}
	
	
	void print()
	{
		cout << pone <<","<< ptwo<< endl;
	}

};

int main() {

	SmartPointer <int> pointer = new int(5);
	cout << *pointer << endl;
	SmartPointer <test> c(new test(69,96));
	c->print();
	shared_ptr <test> p1(new test(50, 10));
	shared_ptr <test> p2(p1);
	p1->print();
	p2->print();

	return 0;
}

