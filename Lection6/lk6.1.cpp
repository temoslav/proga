#include <iostream>
#include <vector>
using namespace std;

void output(vector<int> vc, int n = 0)
{
	try
	{
		vc.at(n);
		cout << n << endl;
		output(vc, n + 1);
		throw out_of_range;
	}
	catch (exception e)
	{
		cerr << e.what();
		return;
	}
}

int main()
{
	int N;
	cin >> N ;
	vector<int> vect(N+1);


	output(vect);
}