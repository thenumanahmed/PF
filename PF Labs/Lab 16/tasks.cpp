#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int displayMenu();
void inputFromFile();
void storenewemployeedata();
void saveDataToFile();


struct Salary {
	string employeeId;
	string employeeName;
	string designation;
	long basicSalary;
	string month;
	int noOfLeaves;
	int leavesAllowed;
	long perLeaveDeductionRate;
	long salary;
};

const int SIZE = 5;
Salary employee[SIZE];
int selection = 0;
int i = 0;
int choice = 0;
bool flagToStop = true;

fstream inOut;
int main()
{

	inOut.open("hi.txt", fstream::app);
	do {

		selection = displayMenu();
		switch (selection) {
		case 1:         //If User Enters 1
			inputFromFile();

			break;

		case 2:         // If User Enters 2.

			break;

		case 3:	//If User Enters 3
			storenewemployeedata();

			break;

		case 4:			//If User Enters 4
			break;

		default:		//If User Enters Wrong Choice
			cout << "Please Enter a Valid Number." << endl;
			break;
		}
	} while (selection != 4);
	inOut.close();
	return 0;
}
//Function Definitions
int displayMenu() {
	int selection;
	cout << "Enter a Number from 1-4 to select from the Menu: " << endl;
	cout << "'1' for entering info of employee to manage salary of specific month." << endl;
	cout << "'2' to print salary slip." << endl;
	cout << "'3' for entering information of new employee." << endl;
	cout << "'4' to quit." << endl;
	cin >> selection;
	return selection;
}

void inputFromFile() {
	while (!inOut.eof())
	{
		inOut >> employee[i].employeeId;
		inOut >> employee[i].employeeName;
		inOut >> employee[i].designation;
		inOut >> employee[i].basicSalary;
		inOut >> employee[i].month;
		inOut >> employee[i].noOfLeaves;
		inOut >> employee[i].leavesAllowed;
		inOut >> employee[i].perLeaveDeductionRate;
		inOut >> employee[i].salary;
		i++;   // to increment for next value
	}return;
}

void storenewemployeedata() {
	cout << "Enter the employee id: ";
	cin >> employee[i].employeeId;
	cout << "Enter the employee name: ";
	cin >> employee[i].employeeName;
	cout << "Enter the designation: ";
	cin >> employee[i].designation;
	cout << "Enter the basic salary: ";
	cin >> employee[i].basicSalary;
	cout << "Enter the month of salary: ";
	cin >> employee[i].month;
	cout << "Enter the no of leaves taken: ";
	cin >> employee[i].noOfLeaves;
	cout << "Enter the no of leaves allowed: ";
	cin >> employee[i].leavesAllowed;
	cout << "Enter per leave deduction rate: ";
	cin >> employee[i].perLeaveDeductionRate;
	saveDataToFile();
	i++;
	return;
}
void saveDataToFile() {
	inOut << employee[i].employeeId << "\t";
	inOut << employee[i].employeeName << "\t";
	inOut << employee[i].designation << "\t";
	inOut << employee[i].basicSalary << "\t";
	inOut << employee[i].month << "\t";
	inOut << employee[i].noOfLeaves << "\t";
	inOut << employee[i].leavesAllowed << "\t";
	inOut << employee[i].perLeaveDeductionRate << "\n";
}

/////////////////////////////////////////////////////////////////////////////
/*
void takingInputFromUser() {
	do {
		inputDataOfNewEmployee();
		++i;                           //incremented for next array element
		if (!flagToStop) {
			employee[i].salary = calculateSalary(employee[i].basicSalary, employee[i].noOfLeaves, employee[i].leavesAllowed, employee[i].perLeaveDeductionRate);
		}

	} while (flagToStop);
}

void storeDataToFile() {
	outToFile.open("EmployeesManagementSystem.txt");
	for (int j = 0; j < i; j++) {
		outToFile << employee[i].employeeId << "\t";
		outToFile << employee[i].employeeName << "\t";
		outToFile << employee[i].designation << "\t";
		outToFile << employee[i].basicSalary << "\t";
		outToFile << employee[i].month << "\t";
		outToFile << employee[i].noOfLeaves << "\t";
		outToFile << employee[i].leavesAllowed << "\t";
		outToFile << employee[i].perLeaveDeductionRate << "\t";
		outToFile << employee[i].salary << "\n";
	}
}

void inputDataOfNewEmployee()
{
	string tempfirst, tempsecond;
	cout << endl << "Enter the Employee Id: ";
	cin.ignore();
	getline(cin, employee[i].employeeId);

	if (employee[i].employeeId == "kodkmd") {
		flagToStop = false;           //To stop Entering new data
		return;
	}

	cout << endl << "Enter the first name of Employee: ";
	cin.ignore();
	getline(cin, tempfirst);

	cout << endl << "Enter the second name of Employee: ";
	cin.ignore();
	getline(cin, tempsecond);

	employee[i].employeeName = tempfirst + " " + tempsecond;

	cout << endl << "Enter the Employee Designation: ";
	cin.ignore();
	getline(cin, employee[i].designation);

	cout << endl << "Enter the Employee Basic Salary: ";
	cin >> employee[i].basicSalary;

	cout << endl << "Enter the Month for Salary: ";
	cin.ignore();
	getline(cin, employee[i].month);

	cout << endl << "Enter the no of leaves taken by Employee: ";
	cin >> employee[i].noOfLeaves;

	cout << endl << "Enter the no of leaves allowed to the Employee: ";
	cin >> employee[i].leavesAllowed;

	cout << endl << "Enter per leave deduction rate: ";
	cin >> employee[i].perLeaveDeductionRate;
	return;
}
void storeDataOfNewEmployee() {
	cout << "hi";
	return;
}

void printSalarySlip() {
	cout << "hi";
	return;
}

long calculateSalary(long employee[i].basicSalary, int employee[i].noOfLeaves, int employee[i].leavesAllowed, long employee[i].perLeaveDeductionRate)
{
	long employee[i].salary;
	if (employee[i].noOfLeaves > employee[i].leavesAllowed)
	{
		employee[i].salary = employee[i].basicSalary - (employee[i].noOfLeaves - employee[i].leavesAllowed) * employee[i].perLeaveDeductionRate;
	}
	else
	{
		employee[i].salary = employee[i].basicSalary;
	}
	return employee[i].salary;
}

void readDatafromFile() {
	cout << "hi";
	return;
}
