#include<iostream>
#include<windows.h>       //for sleep()

using namespace std;

int main()
{
	int hrs,min,sec;
	while(1)
	{
		system("cls");
		for(hrs=0;hrs<23;hrs++)
		{
			for(min=0;min<60;min++)
			{
	
				for(sec=0;sec<60;sec++)
				{
					system("cls");
					cout<<hrs<<":"<<min<<":"<<sec;
					Sleep(1000);                            //sleep for 1000 milli sec = 1 sec
				}
				sec=0;
			}
			min=0;
		}
	}
	return 0;
}
