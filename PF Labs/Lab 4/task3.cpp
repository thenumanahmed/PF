#include<iostream>
#include<string>
using namespace std;
int main()
{
	string course;
	float total, obtained, percentage;
	cout << "Enter Course Name ";
	cin >> course;
	cout << "\nEnter obtained marks ";
	cin >> obtained;
	cout << "\nEnter total Marks ";
	cin >> total;

	percentage = (obtained / total) * 100;
	cout << "\n In " << course << " course. You Have Secured " << percentage<<"% \n \n \n ";

	return 0;
}