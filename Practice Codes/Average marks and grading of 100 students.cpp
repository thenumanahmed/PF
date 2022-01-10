#include <iostream>
using namespace std;
int main()
{
    double sum = 0, avg = 0, c = 0, marks = 0;
    cout << "This program will print the grades and calculate the average marks of students. ";
    cout << endl << "Enter marks of " << c + 1 << " student: ";
    cin >> marks;
    if (marks == -1)
    {
        cout << endl << "Program End ";
    }
    else
    {
        while (marks != -1 && c < 100)
        {
            if (marks >= 95 && marks <= 100)
                cout << "Grade 'A+' " << endl;
            else if (marks >= 90)
                cout << "Grade 'A' " << endl;
            else if (marks >= 85)
                cout << "Grade 'B+' " << endl;
            else if (marks >= 80)
                cout << "Grade 'B' " << endl;
            else if (marks >= 75)
                cout << "Grade 'C+' " << endl;
            else if (marks >= 70)
                cout << "Grade 'C' " << endl;
            else if (marks >= 65)
                cout << "Grade 'D+' " << endl;
            else if (marks >= 60)
                cout << "Grade 'D' " << endl;
            else if (marks >= 55)
                cout << "Grade 'E+' " << endl;
            else if (marks >= 50)
                cout << "Grade 'E' " << endl;
            else if (marks < 50 && marks >= 0)
                cout << "Grade 'F' " << endl;
            else {
                cout << "Invalid Entry";
                sum = sum - marks;
                c = c - 1;
            }
            sum = sum + marks;
            c++;
            cout << endl << "Enter marks of " << c + 1 << " student: ";
            cin >> marks;
        }
        avg = sum / c;
        cout << endl << "The average marks are: " << avg << endl;

    }


    return 0;
}


