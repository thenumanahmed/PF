#include<iostream>
using namespace std;
int main()

{
	int age1, age2, age3;
	cout << "enter the age of 3 people in a line with spaces  :" << endl; 
	cin >> age1 >> age2 >> age3;
	
	if (age1 > age2 && age1 > age3)
		cout << "the older age is :" << age1 << endl;
	else if (age2 > age1 && age2 > age3)
		cout << "the older age is :" << age2 << endl;
	else if (age3 > age2 && age3 > age1)
		cout << "the older age is :" << age3 << endl;

	if (age1 < age2 && age1 < age3)
		cout << "the younger age is :" << age1 << endl;
	else if (age2 < age1 && age2 < age3)
		cout << "the younger age is :" << age2 << endl;
	else if (age3 < age2 && age3 < age1)
		cout << "the younger age is :" << age3 << endl;
	return(0);
}
