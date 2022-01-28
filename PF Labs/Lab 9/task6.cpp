#include<iostream>
using namespace std;
int main()
{
int const index = 10;
int n, isequal = 0;
int array1[index];
int array2[index];
for (int i = 0; i < index; i++)
{
cout << "\n Enter " << i + 1 << "value of array1: ";
cin >> array1[i];
cout << "\n Enter " << i + 1 << "value of array2: ";
cin >> array2[i];

}
for (int a = 0; a < index; a++)
{
if (array1[a] == array2[a])
{
isequal = 1;
}
else{
isequal = 0;
break;
}

}
if (isequal ==1)
cout << "\n Both arrays are equal .";
else
cout << "\n Arrays are unequal .";
cin >> n;
return 0;
}