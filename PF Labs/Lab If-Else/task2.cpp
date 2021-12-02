#include<iostream>
using namespace std;
int main()

{
	double bonus, salary, service ;


	cout << "enter the sevice :";
	cin >> service;
	cout << "enter the salary :";
	cin >> salary;

	bonus = 0.05 * salary + salary;

	if (service >= 5)
		cout << bonus;
	else
		salary;
	return(0);
}
