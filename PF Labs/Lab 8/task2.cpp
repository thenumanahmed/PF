#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double sum=0 ,a =0 ,i= 0;
    
    for (i = 1 ; i<=45; ++i)
    {
        a = 1/i;
        
        sum = sum + a;
        
    }
        cout<<"The sum of the above series is: "<< sum << endl;
        return 0;
}
