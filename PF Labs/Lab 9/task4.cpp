#include<iostream>
using namespace std;
int main()
{
const int index = 10;

int val[index] = { 1, 23, 4, 56, 6, 7, 88, 9, 79, 354 };
int max = val[0];
for (int i = 0; i < index; i++)
{
if (val[i]> max)
{
max = val[i];
}
}
cout << "\nMax value is: " << max << endl;

return 0;
}