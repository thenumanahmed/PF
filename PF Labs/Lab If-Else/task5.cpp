#include<iostream>
#include<iostream>
using namespace std;
int main()

{
	double age;
	char sex = ' ', maritalStatus = ' ';
	cout << "enter age\n";
	cin >> age;
	cout << "enter sex\n F/M" << endl;
	cin >> sex;
	cout << "enter marital status\n Y/N ";
	cin >> maritalStatus;
	if (sex == 'F')
		cout << " work in only urban areas";
	else if (sex == 'M')
	{
		if (age >= 20 && age < 40)
			cout << "work anywhere";
		else if (age >= 40 && age <= 60)
			cout << "work in only urban areas";
		else
			cout << "ERROR";
	}
	return 0;
}