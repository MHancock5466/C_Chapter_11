//12 Ints
//Author: Mason Hancock
//Date: 09/28/2018
#include <iostream>
#include <string>
using namespace std;

int main() {
	int inputs[12] = { 0 };

	for (int i = 0; i < 12; i++) {
		cout << "Input number " << i + 1 << " of 12: ";
		cin >> inputs[i];
	}

	for (int i = 0; i < 12; i++) {
		cout << inputs[i] << endl;
	}
	system("pause");
	return 0;
}