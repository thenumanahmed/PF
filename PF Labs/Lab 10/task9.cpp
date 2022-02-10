
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int ROW = 2;
	const int COL = 2;
	int a[ROW][COL],b[ROW][COL],subtract[ROW][COL];


	for (int i = 0; i < ROW; i++)                // to initialize array a
	{
		for (int j = 0; j < COL; j++)
		{
		cout << "\n a[" << i << "][" << j << "]:";
		cin >> a[i][j];
		}
	}


	for (int i = 0; i < ROW; i++)                // to initialize array b
	{
		for (int j = 0; j < COL; j++)	
		{
		cout << "\n b[" << i << "][" << j << "]:";
		cin >> b[i][j];
		}
	}

	for (int i = 0; i < ROW; i++)                // to get the result sub in array
	{
		for (int j = 0; j < COL; j++)
		{
			subtract[i][j] = b[i][j] - a[i][j];
			
		}
	}

	for (int i = 0; i < ROW; i++)                // to print the result of subtraction stored in array
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "\n subtract[" << i << "][" << j << "]: " << subtract[i][j];

		}
	}	
	_getch();
	return 0;
		
}