
#include<iostream>
#include<string>

using namespace std;
struct Record {
	string name;
	string modelNo;
	long price;
};

void displaylist(int);
const int SIZE = 10;
Record item[SIZE];

int main() {
	int count;
	for (count = 0; count < SIZE; count++)
	{
		cout << endl << "-----------------------------------------------";

		cout << endl << "Enter the Name of " << (count + 1) << " item: ";
		cin.ignore();
		getline(cin, item[count].name);
		if (item[count].name == "quit")
		{
			break;
		}

		cout << "Enter the model no of " << (count + 1) << " item: ";
		cin.ignore(NULL);
		getline(cin, item[count].modelNo);

		cout << "Enter the price of " << (count + 1) << " item: ";
		cin >> item[count].price;
	}
	system("cls");
	displaylist(count);


	return 0;
}

void displaylist(int count) {
	for (int j = 0; j < count; j++) {
		cout << "\n-------------------\n";
		cout << "The name of product " << j + 1 << " is: " << item[j].name;
		cout << "\nThe model no of product " << j + 1 << " is: " << item[j].modelNo;
		cout << "\nThe price of product " << j + 1 << " is: " << item[j].price;
		cout << "\n-------------------\n";
	}
}