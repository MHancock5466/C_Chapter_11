//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by Mason Hancock on 10/02/2018
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	//declare array
	

	//declare variables
	int searchScore = 0;
	int total = 0;

	do {
		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] == searchScore)
				total += 1;
		//end if    
		//end for

		//display total
		cout << "Number of students earning a score of " << searchScore << ": " << total << endl << endl;
	} while (searchScore >= 0);

	system("pause");
	return 0;
}	//end of main function
