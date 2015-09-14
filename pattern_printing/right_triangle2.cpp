#include <iostream>
using namespace std;

/**
	This program prints a right angle triangle.
	For example for n = 4, the output would look like
	    &
	   &&
	  &&&
	 &&&&
*/

int main() {
	int n;
	cin >> n; // Get the value of n

	for (int i = 0; i < n; i++) { // For the rows

		// Print the spaces in row "i"
		for (int j = 0; j < (n - i - 1); j++) {
			cout << " ";
		}

		// Print the values in the row
		for (int j = 0; j <= i; j++) { 
			cout << "&";
		}

		cout << endl; 
	}

	return 0;
}