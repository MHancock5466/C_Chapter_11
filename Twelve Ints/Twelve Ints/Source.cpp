//12 Ints
//Author: Mason Hancock
//Date: 09/28/2018
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int inputs[12] = { 0 };

	for (int i = 0; i < size(inputs); i++) {
		cout << "Input number " << i + 1 << " of 12: ";
		cin >> inputs[i];
	}
	
	sort(inputs, inputs + size(inputs));
	cout << "\nYour Numbers in Ascending Order:" << endl;
	
	for (int i = 0; i < size(inputs); i++) {
		
		cout << inputs[i] << endl;
	}

	sort(inputs, inputs + size(inputs), greater<int>());
	cout << "\nYour Numbers in Descending Order: " << endl;
	
	for (int i = 0; i < size(inputs); i++) {
		
		cout << inputs[i] << endl;
	}

	system("pause");
	return 0;
}