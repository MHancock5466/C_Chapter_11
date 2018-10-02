//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by Mason Hancock on 10/02/2018

#include <iostream>
using namespace std;

int main()
{
	int points[5] = { 62, 75, 100, 83, 85 };
	char grades[5] = { 'D', 'C', 'A', 'B', 'B' };

	for (int i = 0; i < size(points); i++) {
		cout << points[i] << "	" << grades[i] << endl;
	}

	system("pause");
	return 0;
}	//end of main function
