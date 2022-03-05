
#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[SIZE] = { 13579, 26791, 26792, 33445, 55555,
					  62483, 77777, 79422, 85647, 93121 };
	int userArr[SIZE];

	cout << "Enter the data in array : ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> userArr[i];
	}

	int count = 0;
	for (int j = 0; j < SIZE; j++)
	{
		for (int k = 0; k < SIZE; k++)
		{
			if (arr[j] == userArr[k])
				count++;
		}
	}
	cout << "The total ticket matches : " << count;
	return 0;
}