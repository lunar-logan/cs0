#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int m, n, o, p;
	cin >> m >> n >> o >> p; // take four integers as input
	int second_minimum = m;

	if (m < n && m < o && m < p) {
		if (n < o && n < p) {
			second_minimum = n;
		}
		else if (o < n && o < p) {
			second_minimum = o;
		}
		else if (p < o && p < n) {
			second_minimum = p;
		}
	}
	else if (n < o && n < p) {
		if (m < o && m < p) {
			second_minimum = m;
		}
		else if (o < m && o < p) {
			second_minimum = o;
		}
		else if (p < o && p < m) {
			second_minimum = p;
		}
	}
	else if (o < p) {
		if (m < n && m < p) {
			second_minimum = m;
		}
		else if (n < m && n < p) {
			second_minimum = n;
		}
		else if (p < n && p < m) {
			second_minimum = p;
		}
	}
	else {
		if (m < n && m < o) {
			second_minimum = m;
		}
		else if (n < m && n < o) {
			second_minimum = n;
		}
		else if (o < n && o < m) {
			second_minimum = o;
		}
	}

	cout << second_minimum << " is the second minimum\n";

	return 0;
}
