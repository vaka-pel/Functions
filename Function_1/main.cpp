#include<iostream>
using namespace std;

int Fact(int n)
{
	if (n == 0)
		return 1;
	else return n * Fact(n - 1);
}

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число: ";  cin >> n;
	
	cout << n << " = " << Fact(n) << endl << endl;
	return;
	
}