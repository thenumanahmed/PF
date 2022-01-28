#include<iostream>
using namespace std;
int main()
{
	int a, check = 0, index = 10,i = 0;
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "\nEnter the value to check: ";
	cin >> a;
	while( i < index &&  check != 1)
	{
		if (a == array[i])
		{
			check = 1;
			index = i;
		}
		else
		{
			check = 0;

		}i++;
	}
	if (check == 1)
		cout << " the number exist at index " << index << endl;
	else
		cout << "The number does not exist .";
	cin >> a;
	return 0;
}
