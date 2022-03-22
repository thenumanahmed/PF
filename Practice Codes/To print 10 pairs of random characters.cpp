// using ASCII Values
/*
0   48
9   57

A   65
Z   90

a   97
z   122

*/

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

char ch ( int x){
    if( x<10 )         
        return ( x+ 48 );                       // for digits
    if( x<36 )
        return ( x+ 55 );                       // for uppercase letters
    if( x<62 )
        return ( x+ 61 );                       // for lowercase letters
    
    return '0';           // default
}

int main(){
    srand( time(NULL) );

    for( int m = 0 ; m < 10 ; m++ ){                   // will display 10 pairs of 
        for( int n = 0 ; n < 5 ; n++ )                 // 5 random charcters
            cout << ch ( rand() % 62 );
        cout << endl;
    }

    return 0;
}
