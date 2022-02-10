
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int ROW = 4;
	const int COL = 5;
	int array[ROW][COL];
	int r = 0;

	for (int i = 0; i < ROW; i++)                // to initialize
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "\narray[" << i << "][" << j << "]:";
			cin >> array[i][j];
		}
	}
	cout << "\n Enter the no of row to check the lowest value: ";    //to get no of row from user
	cin >> r;
	int lowest = array[r-1][0];

	for (int j = 0; j < COL; j++)
	{
		if (lowest > array[r-1][j])
			lowest = array[r-1][j];
	}


	cout << "\nLowest value of row "<<r<<" with index " << r-1 <<" is:" << lowest; _getch();
	return 0;

}