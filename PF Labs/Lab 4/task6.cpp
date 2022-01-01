#include <iostream>
#include<bits/stdc++.h>
using namespace std

int main() 
{
    float kg, pounds;
    
    cout<< "\nEnter weight in kilograms ";
    cin>>kg;
    
    pounds = kg*2.205;
    
    cout<<" \nWeight in kilograms is ";
    cout<< fixed << setprecision(2) << kg;
    
    cout<<" \nWeight in pounds is  ";
    cout<<  fixed <<  setprecision(2) << pounds;
    

    return 0;
}