#include<iostream>
using namespace std;
int main(){
    char text[] = "Hello there!";

    int nChars = sizeof(text)- 1;                  // -1 to exclude null character

    char *pStart = text;              
    char *pEnd = text + nChars -1 ;               ///starting address of array + no of char -1 means last index

    while( pStart < pEnd )
    {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save ;

        pStart++;
        pEnd--;
    } 
    
    cout << text << endl;
    
    return 0;
}