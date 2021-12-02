#include<iostream>
using namespace std;
int main()

{
	double attendancePercentage, classesHeld, classesAttended;
	char medicalReason;

	cout << "number of classes held :" << endl;
	cin >> classesHeld;
	cout << "number of classes attended :" << endl;
	cin >> classesAttended;
	attendancePercentage = (classesAttended / classesHeld) * 100;
	cout << "enter medical reason in capital letter: Y/N:"<<endl;
	cin >> medicalReason;
	if (medicalReason == 'N')
	{
		if (attendancePercentage < 75.00)
			cout << "Not allowed";
		else
			cout << "allowed";
	}
	else if (medicalReason == 'Y')
		cout << "allowed";
	else
		cout << "enter valid Y/N";
	return 0;
}
