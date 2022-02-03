#include<iostream>
using namespace std;
int main(){
    const int n = 5 , m = 4;
    int a[n][m] ;

    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++)
            cin >> a[i][j];
    }

    //spiral print order
    int rowStart = 0, rowEnd = n-1, columnStart = 0, columnEnd = m-1;

    while( rowStart<=rowEnd && columnStart<=columnEnd)
    {
        //for row start
        for( int col = columnStart ; col <= columnEnd ; col++){
            cout << a[rowStart][col] << " ";
        }
        rowStart++;

        ///for colmn end
        for( int row = rowStart ; row <= rowEnd ; row++ ){
            cout << a[row][columnEnd] << " " ;
        }
        columnEnd--;

        //for row end
        for( int col = columnEnd ; col >= columnStart ;col--){
            cout << a[rowEnd][col] << " " ;
        }
        rowEnd--;

        //for column start
        for ( int row = rowEnd ; row >= rowStart ; row-- ){
            cout << a[row][columnStart] << " " ;
        }
        columnStart++;
    }

    return 0;
}