
#include<iostream>
#include<iomanip> 
using namespace std;
char cal_grades(int  marks)
{
	if (marks >= 90)
		return'A';
	else if (marks >= 80)
		return'B';
	else if (marks >= 80)
		return'C';
	else if (marks >= 70)
		return'D';
	else if (marks >= 60)
		return'E';
	else 
		return'F';

}

int main()
{
	int marks;
	cout << " Enter marks of the student: ";
	cin >> marks;
	cal_grades(marks);


	return 0;
}