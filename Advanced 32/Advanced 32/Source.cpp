//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Mason Hancock on 10/03/2018
#include <iostream>
using namespace std;

int main() {
	//declare variables
	int points;
	double pointsPossible = 0;
	
	//get total possible points
	do {
		cout << "Enter the number of possible points (negative to close program): ";
		cin >> pointsPossible;
		if (pointsPossible < 0)
			points = -1;
		else points = 0;
		
		//declare arrays and fill with data
		double minPoints[5] = { 0.9*pointsPossible, 0.8*pointsPossible, 0.7*pointsPossible, 0.6*pointsPossible };
		char grade[5] = { 'A', 'B', 'C', 'D', 'F' };

		//get total points
		while (points >= 0) {
			cout << "Enter points earned (negative number to stop grading): ";
			cin >> points;

			for (int i = 0; i < size(grade); i++)
				if (points >= minPoints[i]) {
					cout << grade[i] << endl;
					i = size(grade);
				}
		}
	} while (pointsPossible >= 0);

	system("pause");
	return 0;
}	//end of main function