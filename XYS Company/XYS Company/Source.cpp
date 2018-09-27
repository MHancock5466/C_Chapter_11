#include <iostream>
#include <string>
using namespace std;

int main() {
	int valuesArray[7] = { 50, 10, 5, 25, 30, 15, 20 };
	int total = 0;

	for (int i = 0; i < size(valuesArray); i++) {
		cout << valuesArray[i] << endl;
		total += valuesArray[i];
	}

	cout << "Total of values: " << total << endl;

	system("pause");
	return 0;
}