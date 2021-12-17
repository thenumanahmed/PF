#include<iostream>
using namespace std;
int main()
{
    char b ;
    int c;
    cout<<"Enter a character: ";
    cin >>b;
    c =static_cast<int>(b);
    cout<<"\nASCII for "<<b<< " is: "<<c;
    return 0;
}