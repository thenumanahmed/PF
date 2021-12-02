
#include <iostream>

using namespace std;

int main()
{
    double a,b;
    char h;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    
    cout<<"Enter operator: ";
    cin>>h;
    
    if( h=='*' )
    cout << a*b;
    
    else if(h=='+')
    cout << a+b;
    
    else if(h=='-')
    cout << a-b;
    
    else if(h=='/')
    cout << a/b;
    
    return 0;
}


