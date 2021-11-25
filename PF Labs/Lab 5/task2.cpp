#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
		
	float c, f;
	cout << "Enter Temperature in Celsius: ";
	cin >> c;
	f = (9.0/5.0)*c +32;
	cout << "\nTemperature in fahrenheit is: "<<f <<endl ;

	return 0;

}