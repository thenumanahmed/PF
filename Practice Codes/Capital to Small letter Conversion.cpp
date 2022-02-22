#include<iostream>
using namespace std;
int main()
{
    char b,d ;
    int c;
    cout<<"Enter a character: ";
    cin >>b;
    c =static_cast<int>(b)+32;
    d =c;
    cout<<"\nThe small letter of "<<b<< " is: "<<d;
    return 0;
}