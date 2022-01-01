#include<iostream>
using namespace std;
int main()
{
	float km, m, inch, feet, cm;
	cout << "Enter Distance Between Two Cities In Km ";
	cin >> km;
	m = km * 1000;
	cm = m * 100;
	inch = km*39370.079;
	feet = inch * 12;
	cout << "\nDistance in meters is = " << m << "\n";
	cout << "\nDistance in centimeters is = " << cm << "\n";
	cout << "\nDistance in inch is = " << inch << "\n";
	cout << "\nDistance in feet is = " << feet << "\n";


	return 0;
}