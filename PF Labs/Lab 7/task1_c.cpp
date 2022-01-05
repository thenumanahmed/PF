#include <iostream>
using namespace std;
int main()
{
    cout << "This program wil display the name of the month of year corressponding to number entered by the user. " << endl;
    int c;
    cout << "Enter a number: ";
    cin >> c;

    switch (c)
    {
        case 1 :
            cout << endl << "The number " << c << " corressponds to 'January' ";
            break;
        case 2:
            cout << endl << "The number " << c << " corressponds to 'February' ";
            break;
        case 3:
            cout << endl << "The number " << c << " corressponds to 'March' ";
            break;
        case 4:
            cout << endl << "The number " << c << " corressponds to 'April' ";
            break;
        case 5:
            cout << endl << "The number " << c << " corressponds to 'May' ";
            break;
        case 6:
            cout << endl << "The number " << c << " corressponds to 'June' ";
            break;
        case 7:
            cout << endl << "The number " << c << " corressponds to 'July' ";
            break;
        case 8:
            cout << endl << "The number " << c << " corressponds to 'August' ";
            break;
        case 9:
            cout << endl << "The number " << c << " corressponds to 'September' ";
            break;
        case 10:
            cout << endl << "The number " << c << " corressponds to 'October' ";
            break;
        case 11:
            cout << endl << "The number " << c << " corressponds to 'November' ";
            break;
        case 12:
            cout << endl << "The number " << c << " corressponds to 'December' ";
            break;
        default:
            cout << endl << "The number " << c << " is Invalid. ";
    }

    return 0;
}


