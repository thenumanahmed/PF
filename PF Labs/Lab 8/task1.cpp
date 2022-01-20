#include<iostream>

using namespace std;

int main()
{
    char character;
    int ascii;
    for (ascii = 0; ascii<128 ;ascii++)
    {
        character = ascii;
        cout<<character;
        
        if(ascii%16 == 0)
        {
            cout<<endl;
            
        }
        
      
    } return 0;
}
