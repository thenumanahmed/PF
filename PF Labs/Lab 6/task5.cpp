#include <iostream>

using namespace std;

int main()
{
    double x,y;
    char h;
    cout<<"Enter two numbers: " ;
    cin>>x>>y;
    
    cout<<"Enter operator\n+ for sum,\n* for multiplication,\na for average,\n- for sub,\n/ for division\n  ";
    cin>>h;

    if(h== '*')
    cout<<x*y;
    
    else if(h=='+')
    cout<<x+y;
    
    else if(h=='-' )
    cout<<x-y;
    
    else if(h=='/' )
    cout<<x/y;
    
    
    else if(h=='a')
    cout<<(x+y)/2;
    
    
    return 0;
}
