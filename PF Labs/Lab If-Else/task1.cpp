#include<iostream>
using namespace std;
int main()

{
	double length, breadth;

	cout << "emter the length :";
	cin >> length;

	cout << "enter the breadth:";
	cin >> breadth;


	if (length == breadth)
		cout << "it is a square";

	else
		cout << "it is not a square";

	return(0);
}
