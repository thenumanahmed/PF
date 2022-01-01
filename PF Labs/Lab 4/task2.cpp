#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a, b, Add, Subtract, Multiply, Mod;
	float Divide;
	cout << "Enter Two Integers: ";
	cin >> a>> b;
	Add = a + b;
	Subtract = a - b;
	Multiply = a * b;
	Divide = a / b;
	Mod = a % b;
	cout << a << " + " << b << " = " << Add << endl;
	cout << a << " - " << b << " = " << Subtract<< endl;
	cout << a << " * " << b << " = " << Multiply<< endl;
	cout << a << " / " << b << " = " << Divide<< endl;
	cout << a << " % " << b << " = " << Mod<< endl;

	
	return 0;
}