#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	float age1,age2,age3;

	cout << "Enter the age of 1st person: ";
	cin >> age1;
	cout << "\nEnter of age of 2nd person: ";
	cin >> age2;
	cout << "\nEnter the age of 3rd person: ";
	cin >> age3;
	//condition for oldest
	if ( age1>age2 && age1>age3)
	{
		cout << "\nPerson with age " << age1 << " is the Oldest";
	}
	else if (age2>age1 && age2>age3)
	{
		cout << "\nPerson with age " << age2 <<  " is the Oldest";
	}
	else if (age3 > age1 && age3 > age2)
	{
		cout << "\nPerson with age " << age3 << " is the Oldest";		
	}
	
	//condition for youngest
	if (age1<age2 && age1<age3)
	{
		cout << "\nPerson with age " << age1 << " is the Youngest";
	}
	else if (age2<age1 && age2<age3)
	{
		cout << "\nPerson with age " << age2 << " is the Youngest";
	}
	else if (age3 < age1 && age3 < age2)
	{
		cout << "\nPerson with age " << age3 << " is the Youngest";
	}
	_getch();


	return 0;
}

