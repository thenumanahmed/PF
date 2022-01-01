#include<iostream>

using namespace std;
int main()
{
	float gallon, cubicfeet;
	cout << " 1 cubic feet = 7.48 gallons\n";
	cout << "Enter No of Gallons ";
	cin >> gallon;
	cubicfeet = gallon*(1 / 7.48);
	cout << "Gallons in cubic feet = " << cubicfeet;

	return 0;
}