//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Mason Hancock on 10/03/2018
#include <iostream>
using namespace std;

int main() {
	//declare variables
	double points = 0;

	//declare arrays and fill with data
	char grades[5] = { 'A', 'B', 'C', 'D', 'F' };
	int minPoints[5] = { 450, 400, 350, 300, 0 };

	//get total points
	do {
		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;

		for (int i = 0; i < size(grades); i++)
			if (points >= minPoints[i]) {
				cout << grades[i] << endl;
				i = size(grades);
			}
	} while (points >= 0);

	system("pause");
	return 0;
}	//end of main function