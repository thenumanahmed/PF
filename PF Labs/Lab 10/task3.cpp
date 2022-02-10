
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int ROW = 4;
	const int COL = 5;
	double total = 0;
	int array[ROW][COL];
	for (int j = 0; j < ROW; j++)
	{
		for (int i = 0; i < COL; i++)
		{
			cout << "\narray[" << j << "][" << i << "]:";
			cin >> array[j][i];
			total += array[j][i];
		}
		cout << "\nThe sum of column " << j + 1 << " is:" << total;
		total = 0;

	}
	cout << total; _getch();
	return 0;

}
