//Intermediate24.cpp
//Stores monthly rainfall amounts in an array
//Displays the monthly rainfall amounts, the
//total annual rainfall amount, the average rainfall
//amount, the highest rainfall amount, or the lowest
//rainfall amount
//Created/revised by Mason Hancock on 10/02/2018
#include <iostream>
using namespace std;

//function prototypes
void displayMonthly(double rainAmt[], int nummonths);
void displayTotal(double rainAmt[], int months);
void displayAverage(double rainAmt[], int months);
void displayHigh(double rainAmt[], int months);
void displayLow(double rainAmt[], int months);
int main() {
	//declare array and variable
	double rainfall[12] = { 0.0 };
	int choice = 0;
	int months = 12;

	//get rainfall amounts
	for (int x = 0; x < months; x++) {
		cout << "Enter rainfall for month " << x + 1 << ": ";
		cin >> rainfall[x];
	} //end for
	displayAverage(rainfall, months);
	displayLow(rainfall, months);
	displayHigh(rainfall, months);
	do {
		//display menu and get menu choice
		cout << endl;
		cout << "1  Display monthly amounts" << endl;
		cout << "2  Display total amount" << endl;
		cout << "3  Display average amount" << endl;
		cout << "4  Display highest amount" << endl;
		cout << "5  Display lowest amount" << endl;
		cout << "6  End program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		//call appropriate function or end program
		if (choice == 1)
			displayMonthly(rainfall, months);
		else if (choice == 2)
			displayTotal(rainfall, months);
		else if (choice == 3)
			displayAverage(rainfall, months);
		else if (choice == 4)
			displayHigh(rainfall, months);
		else if (choice == 5)
			displayLow(rainfall, months);
		//end if
	} while (choice >= 1 && choice <= 5);

	system("pause");
	return 0;
}   //end of main function

	//*****function definitions*****
void displayMonthly(double rainAmt[], int numMonths) {
	cout << "Monthly rainfall amounts:" << endl;
	for (int x = 0; x < numMonths; x++)
		cout << rainAmt[x] << endl;
	//end for
}  //end of displayMonthly function

void displayTotal(double rainAmt[], int months) {
	double total = 0.0;
	for (int x = 0; x < months; x++)
		total = total + rainAmt[x];
	//end for
	cout << "Total rainfall: " << total << endl;
}  //end of displayTotal function

void displayAverage(double rainAmt[], int months) {
	double total = 0;
	for (int i = 0; i < months; i++)
		total += rainAmt[i];
	cout << "Average: " << total / months << endl;
}  //end of displayAverage function

void displayHigh(double rainAmt[], int months) {
	double high = 0;
	for (int i = 0; i < months; i++)
		if (rainAmt[i] > high)
			high = rainAmt[i];
	cout << "High: " << high << endl;
}  //end of displayHigh function

void displayLow(double rainAmt[], int months) {
	double low = 1000;
	for (int i = 0; i < months; i++)
		if (rainAmt[i] < low)
			low = rainAmt[i];
	cout << "Low: " << low << endl;
}  //end of displayLow function