

#include<iostream>
#include<string>

using namespace std;
struct Employee{
	int employeeNumber;
	string employeeName;
	long basicSalary;
	int houseAllowance;
	int medicalAllowance;
	int tax;
	long grossPay;
	long netSalary;
};

void empSalary(long);
void display();

	Employee PAY;

int main() {
	cout << "-----------------\n";
	cout << "Enter the Employee Number: ";
	cin >> PAY.employeeNumber;

	cout << "Enter the Employee Name: ";
	cin.ignore();
	getline(cin, PAY.employeeName);

	cout << "Enter the Basic Salary: ";
	cin >> PAY.basicSalary;

	system("cls");
	empSalary(PAY.basicSalary);
	display();


	return 0;
}
void empSalary(long basicSalary) {
	PAY.houseAllowance = 0.1 * PAY.basicSalary;
	PAY.medicalAllowance = 0.05 * PAY.basicSalary;
	PAY.tax = 0.04 * PAY.basicSalary;
	PAY.grossPay= PAY.basicSalary+ PAY.houseAllowance+PAY.medicalAllowance;
	PAY.netSalary= PAY.grossPay-PAY.tax;
}
void display() {
	cout << "\nEmployee Number: " << PAY.employeeNumber;
	cout << "\nEmployee Name: " << PAY.employeeName;
	cout << "\nBasic Salary: " << PAY.basicSalary;
	cout << "\nHouse Allowance: " << PAY.houseAllowance;
	cout << "\nMedical Allowance: " << PAY.medicalAllowance;
	cout << "\nGross Salary: " << PAY.grossPay;
	cout << "\nTax Deduction: " << PAY.tax;
	cout << "\nNet Salary: " << PAY.netSalary;
	cout << "\n\n";
}