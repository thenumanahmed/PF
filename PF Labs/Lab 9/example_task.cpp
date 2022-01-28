#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout << "Elements\t Square"<< endl;
cout << "========\t ======"<< endl;
int t;
const int size = 5;
int array[size];
for (int i = 0; i < size; i++)
{
array[i] = i*i;
cout << setw(5) << i << "\t\t" << setw(5) << array[i] << endl;

}cin >> t;
return 0;
}