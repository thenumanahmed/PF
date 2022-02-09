#include<iostream>
using namespace std;
int reverseNum (int n) ;
int main(){
    int num;
    do{
        cout << endl <<"Enter a number: ";
        cin>>num;
        if( num < 0 ){
            cout<< endl <<"Please enter a positive number. ";
        }
    }while( num < 0 );
    return 0;
}
int reverseNum(int n){
    int reversed = 0,remainder = 0;
    do{
        remainder = n % 10 ;
        n = n / 1;
        reversed = (reversed * 1) + remainder;
    }while( n < 0 );
    return reversed;
}