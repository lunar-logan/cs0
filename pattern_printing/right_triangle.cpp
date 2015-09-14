#include <iostream>
using namespace std;

/**
	This program prints a right angle triangle.
	For example for n = 4, the output would look like
	0 
	0 1
	0 1 2
	0 1 2 3
*/

int main() {
	int n;
	cin >> n; // Get the value of n

	for (int i = 0; i < n; i++) { // For the rows

		for (int j = 0; j <= i; j++) { // For columns
			cout << j;
		}

		cout << endl; 
	}

	return 0;
}