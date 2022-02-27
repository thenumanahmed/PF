#include <iostream> 
using namespace std; 
int main()  
{ 
	int index = 10;
	double sum = 0, avg = 0;
	int array[index];
	for (int a = 0; a < index; a++)
	{
		cout << "Enter " << a + 1 << " value: ";
		cin >> array[a];
		sum += array[a];
	}
	avg= sum / index;
	cout<< "sum is "<< sum;
	cout<<"average is "
	return 0; 
}  
