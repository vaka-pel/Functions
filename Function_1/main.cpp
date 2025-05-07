#include<iostream>
using namespace std;

int Fact(int b);

void main()
{
	setlocale(LC_ALL, "");
	int b, a = 1;
	cout << "¬ведите число: ";  cin >> b;
	int f = Fact(b);
	cout << f << " * " << a << " = " << f << endl;
	a++;
}
int Fact(int a)
{
	int f = a * f;
	return f;
}