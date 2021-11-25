#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	float y = 0.1;
	cout << setw(12) << setfill('*') << 9997 << endl;
	
	cout << fixed << setprecision(3) << y << endl;
	cout << scientific << y << endl;

	return 0;

}