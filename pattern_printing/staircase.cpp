#include <iostream>
using namespace std;

/**
	This program prints the stair case.
	For example for n = 7, the output would look like
	
	#######
	#######
	#######
	##############
	##############
	##############
	#####################
	#####################
	#####################
	############################
	############################
	############################
	###################################
	###################################
	###################################
	##########################################
	##########################################
	##########################################
	#################################################
	#################################################
	#################################################
*/

int main() {
	int n;
	cin >> n; // Get the value of n

	int stairHeight = 3;
	int stairWidth = 7;

	for (int i = 0; i < n; i++) { 

		for (int j = 0; j < stairHeight; j++) {
			for (int k = 0; k < stairWidth * (i + 1); k++) {
				cout << "#";
			}
			cout << endl;
		}
	}

	return 0;
}