#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int ROW = 4;
	const int COL = 5;
	int array[ROW][COL];
	;

	for (int i = 0; i < ROW; i++)                // to initialize
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "\narray[" << i << "][" << j << "]:";
			cin >> array[i][j];
		}
	}

	int highest = array[0][0]
	
	for (int i = 0; i < ROW; i++)                // to check heghest
	{
		for (int j = 0; j < COL; j++)
		{
			if (highest < array[i][j])
				highest = array[i][j];
		}
	}


	cout <<"Highest is:" <<highest; _getch();
	return 0;

}
