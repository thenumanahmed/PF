
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number of books you purchased this month: ";
    cin >> a;
    if (a < 0)
        cout << endl << " You entered an invalid number. ";
    else
    {
        switch (a)
        {
        case 0:
            cout << "You earned 0 points." << endl;
            break;
        case 1:
            cout << "You earned 5 points. " << endl;
            break;
        case 2:
            cout << "You earned 15 points. " << endl;
            break;
        case 3:
            cout << "You earned 30 points. " << endl;
            break;
        default:
            cout << "You earned 60 points. " << endl;
        }

    }

    return 0;
}