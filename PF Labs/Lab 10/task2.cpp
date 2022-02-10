#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int ROW = 4;
	const int COL = 5;
	double total = 0;
	int array[ROW][COL];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << "\narray[" << i << "][" << j << "]:";
			cin >> array[i][j];
			total += array[i][j];
		}
		cout << "\nThe sum of row " << i + 1 << " is:" << total;
		total = 0;
	
	}
	cout << total; _getch();
	return 0;

}
