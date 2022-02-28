
#include<iostream>
#include<iomanip> 
using namespace std;
int calculatePopulation( int previousPopulation, int birthRate , int deathRate, int noOfYears) {
	int rate = noOfYears * (birthRate * previousPopulation - deathRate * previousPopulation);
	int newPopulation = previousPopulation + rate;
	return newPopulation;
}

int main() {
	int previousPopulation, birthRate, deathRate, noOfYears, newPopulation;


	cout << endl << " Enter the starting size of population: ";
	cin >> previousPopulation;
	cout << endl << " Enter annual birth rate: ";
	cin >> birthRate;
	cout << endl << " Enter annual death rate: ";
	cin >> deathRate;
	cout << endl<< "Enter no of years:";
	cin >> noOfYears;
	cout << "\nTotal Population = ";
	cout << calculatePopulation(previousPopulation, birthRate, deathRate, noOfYears);
	return 0;
}