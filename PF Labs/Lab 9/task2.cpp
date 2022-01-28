#include<iostream>
using namespace std;
int main()
{
const int index = 15;
double sum = 0;
int array[index];
for (int a = 0; a < index; a++)
{
cout << " Enter " << a + 1 << " value: ";
cin >> array[a];
sum += array[a];

}
cout << "Sum is : " << sum << endl;
return 0;
}