#include<iostream>

using namespace std;

int main(){
    char arr[20];
    
    cout<<"Enter a word to check: ";
    cin>>arr;

    int size = strlen(arr);
    bool check = 1;
    
    for(int i = 0; i < size ; i++){
        if(arr[i] != arr[size-1-i] ){
            check = 0;
            break ;
        }
    }
    
    if (check == true)
        cout<<"Word is Palindrome. ";
    else
        cout<<"Word is not Palindrome. ";
    return 0;
}