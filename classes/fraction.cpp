#include <iostream>
using namespace std;

// Computes the greatest common divisors of two integers
long gcd(long u, long v) {
	if (v == 0) return u;
	return gcd(v, u % v);
}

class Fraction {
private:
	int num; // the numerator
	int den; // the denominator

public:
	// A parametrized constructor
	Fraction(int n, int d) {
		num = n;
		den = d;
	}

	// Returns the numerator value, such functions that just return the 
	// value of some "field" are knon as "getters". Likewise there are setters. Guess what they do?
	int getNumerator() {
		return num;
	}

	int getDenominator() {
		return den;
	}

	Fraction add(Fraction other) {
		int newDenominator = other.den * den;
		int newNumerator = num * other.den + other.num * den;
		Fraction newFraction(newNumerator, newDenominator);
		newFraction.cancelCommon();
		return newFraction;
	}

	Fraction mul(Fraction other) {
		int newDenominator = other.den * den;
		int newNumerator = other.num * num;
		Fraction newFraction(newNumerator, newDenominator);
		newFraction.cancelCommon();
		return newFraction;
	}

	Fraction div(Fraction other) {
		int newDenominator = den * other.num;
		int newNumerator = num * other.den;
		Fraction newFraction(newNumerator, newDenominator);
		newFraction.cancelCommon();
		return newFraction;
	}

	Fraction sub(Fraction other) {
		int newDenominator = other.den * den;
		int newNumerator = num * other.den - other.num * den;
		Fraction newFraction(newNumerator, newDenominator);
		newFraction.cancelCommon();
		return newFraction;
	}

	double asRealValue() {
		return double(num) / double(den);
	}

	void cancelCommon() {
		int d = gcd(num, den);
		num = num / d;
		den = den / d;
	}



};
std::ostream& operator<<(std::ostream& os, Fraction& f)
{
	// write obj to stream
	return os << f.getNumerator() << '/' << f.getDenominator();
}
int main() {
	Fraction f(2, 3);
	Fraction g = f.add(f);
	cout << f << " "<< g << endl;
	cout << g.add(Fraction(81,243)).asRealValue() << endl;
	return 0;
}