#include<iostream>
using namespace std;
int main()
{
const int index = 15; 
double sum = 0, avg = 0;
int array[index];
for (int a = 0; a < index; a++)
{
cout << " Enter " << a + 1 << " value: ";
cin >> array[a];
sum += array[a];

}
avg = sum / index;
cout << "Sum is : " << sum << endl;
cout << "Average is : " << avg << endl;
return 0;
}