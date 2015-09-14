#include <iostream>
using namespace std;

/**
	This program prints an inverted triangle.
	For example for n = 7, the output would look like

*************
 ***********
  *********
   *******
    *****
     ***
      *
*/

int main() {
	int n;
	cin >> n; // Get the value of n

	for (int i = 0; i < n; i++) { // For the rows

		// Print the spaces in row "i"
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		// Print the values in the row, its all the game of the number of times inner loop
		// executes!
		for (int k = 0; k < (2 * (n - i) - 1); k++) {
			cout << "*";
		}

		cout << endl; 
	}

	return 0;
}