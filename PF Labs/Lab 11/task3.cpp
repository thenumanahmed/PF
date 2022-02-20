
#include<iostream>
#include<iomanip> 
using namespace std;
int calculateRetail(int wholeSaleCost, int markupPercentage) {
	int r = (wholeSaleCost * markupPercentage) + wholeSaleCost;
	return r;
}
int main() {
	int wholeSaleCost, markupPercentage, retailPrice;


	cout << " Enter marks of the whole sale cost: ";
	cin >> wholeSaleCost;
	while (wholeSaleCost < 0) {
		cout << endl << "Value not correct again enter value: ";
			cin >> wholeSaleCost;
	}
	cout << " Enter marks of the markup percentage: ";
	cin >> markupPercentage;
	while (markupPercentage < 0) {
		cout << endl << "Value not correct again enter value: ";
			cin >> markupPercentage;
	}

	retailPrice = calculateRetail(wholeSaleCost, markupPercentage);

	cout << endl << "The retail price is : " << retailPrice;


	return 0;
}