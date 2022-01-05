#include <iostream>
using namespace std;
int main()
{
    cout << "This program wil show you the greatest of 2 numbers. " << endl;
    int num1 = 0, num2 = 0;
    cout << endl << "Enter first number: ";
    cin >> num1;
    cout << endl << "Enter second number: ";
    cin >> num2;
    switch (num1 > num2)
    {
        case 0:
            switch (num1 == num2) {
                case 1:
                    cout << endl << "Both numbers are equal. " << endl;
                    break;
                case 0:
                    cout << endl << "The number " << num1 << " is smaller " << endl;
                    cout << endl << "The number " << num2 << " is greater " << endl;
                    break;
            }
            break;
        case 1:
            cout << endl << "The number " << num2 << " is smaller " << endl;
            cout << endl << "The number " << num1 << " is greater " << endl;
            break;
    }
    return 0;
}
