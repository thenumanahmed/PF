
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
	cout << "\n Enter the no of row to check the highest value: ";    //to get no of row from user
	cin >> r;
	int highest = array[r-1][0];

	for (int j = 0; j < COL; j++)
	{
		if (highest < array[r-1][j])
			highest = array[r-1][j];
	}


	cout << "\nHighest value of row "<<r<<" with index " << r-1 <<" is:" << highest; _getch();
	return 0;

}