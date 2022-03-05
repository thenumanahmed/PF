#include<iostream>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid 
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half 
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half 
		else
			r = m - 1;
	}

	// if we reach here, then element was 
	// not present 
	return -1;
}

	
int main()
{
	const int SIZE = 10;
	int arr[SIZE] = { 13579, 26791, 26792, 33445, 55555,
					  62483, 77777, 79422, 85647, 93121 };
	int userArr[SIZE];

	cout << "Enter 10 data in array : ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> userArr[i];
	}
	int counter = 0;



	for (int i = 0; i < SIZE; i++) {
		int result = binarySearch(arr, 0, SIZE - 1, userArr[i]);
		if (result != -1)
			counter++;
					
	}
	if (counter > 0)
		cout << counter << " numbers matched";
	else
		cout << "NO number matched";
	return 0;

}
