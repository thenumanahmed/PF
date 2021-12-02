#include <iostream>

using namespace std;

int main()
{
    char ch ;
    cout<<"Enter any alphabet ";
    cin >>ch;
    
    if(ch=='a'|| ch=='e' || ch == 'i' ||ch == 'o' || ch == 'u')
       cout<<"\n You entered a vowel character ";
    else if(ch=='A'|| ch=='E' || ch == 'I' ||ch == 'O' || ch == 'U')
       cout<<"\n You entered a vowel character ";
    else
       cout<<"You entered a consonant character";

    return 0;
}
