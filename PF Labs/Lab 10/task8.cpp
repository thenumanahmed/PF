
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int ROW = 2;
	const int COL = 2;
	int a[ROW][COL],b[ROW][COL],sum[ROW][COL];
	

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

	for(int i = 0 ; i < ROW; i++)                // to get the sum in array
	{
		for (int j = 0; j < COL; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			cout << "hi:";
		}
	}

	for (int i = 0; i < ROW; i++)                // to print the sum stored in array
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "\n sum[" << i << "][" << j << "]: " << sum[i][j];

		}
	}
	_getch();
	return 0;

}