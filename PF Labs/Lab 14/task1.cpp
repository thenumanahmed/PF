
#include<iostream>
#include<string>

using namespace std;
struct student {
	string id;
	string name;
	string department;
	string email;
	string phoneNo;
};
int main() {
	const int SIZE = 5;
	student data[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter ID of student " << i + 1 << ": ";
		cin.ignore(NULL);
		getline(cin, data[i].id);
		cout << "Enter Name of student " << i + 1 << ": ";
		cin.ignore(NULL);
		getline(cin, data[i].name);
		cout << "Enter Department of student " << i + 1 << ": ";
		cin.ignore(NULL);
		getline(cin, data[i].department);
		cout << "Enter Email id of student " << i + 1 << ": ";
		cin.ignore(NULL);
		getline(cin, data[i].email);
		cout << "Enter Phone No of student " << i + 1 << ": ";
		cin.ignore(NULL);
		getline(cin, data[i].phoneNo);
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << "\nThe ID of student " << i + 1 << " is: "<< data[i].id;

		cout << "\nThe Name of student " << i + 1 << " is: "<< data[i].name;

		cout << "\nThe Department of student " << i + 1 << " is: "<<data[i].department;

		cout << "\nThe Email id of student " << i + 1 << " is: "<< data[i].email;

		cout << "\nThe Phone No of student " << i + 1 << " is: "<<data[i].phoneNo;
		cout << endl;
	}
	return 0;
}