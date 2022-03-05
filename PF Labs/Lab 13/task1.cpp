#include<iostream>
using namespace std;

int main() {
	const int size = 18;
	long double check = 0;
	bool flag = false;
	long double arrayaccounts[size] = { 5658845,4520125, 7895122, 8777541, 8451277, 1302850,
		8080152, 4562555, 5552012 ,5050552 ,7825878,1250255,
		1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
	cout << endl << " Enter an a account number to check: ";
	cin >> check;
	for (int i = 0; i <= size; i++) {
		if (arrayaccounts[i] == check) {
			flag == true;
			break;
		}
	}
	if (flag)
		cout << "VALID ACCOUNT NO";
	else
		cout << "NOT VALID";
		
	return 0;
}