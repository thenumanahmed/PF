#include <iostream> 
using namespace std; 
int main() 
{ 
	int index;
	int val[5]= {1,2,3,4,5};
	int max = val[0];
	for (int i = 0; i < 5; i++)
	{
		if (val[i] > max)
		{
			index = i;
			max = val[i];
		}
	}
	cout << "\nMax value is " << max << " of index " << index << endl;
	return 0; 
}
