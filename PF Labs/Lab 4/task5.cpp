#include<iostream>
#include<cmath>
using namespace std
int main()
{
    float x , y , a, h;
    cout<<"\nEnter length of adjacent of triangle";
    cin>>x;
    cout<<"\nEnter length of opposite of triangle";
    cinn>>y;
    h = sqrt( x*x + y*y);
    a = ( 1/2 ) * x * y;
    cout << " \nArea of triangle is "<< a<<". \n";

    return 0;
    
}
