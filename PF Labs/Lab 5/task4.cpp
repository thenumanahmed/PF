#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
		 
	const double PI = 3.1416;
	double angle, radian;
	cout << "Input angle in degrees: ";
	cin >> angle;
	radian = angle*(PI/180);
	cout << "\nAngle in radian is: " << radian << endl;

	return 0;

}