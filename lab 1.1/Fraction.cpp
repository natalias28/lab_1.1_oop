#include "Fraction.h"
#include <iostream>
using namespace std;

bool Fraction::setFirst(int value)
{
	if (value >= 0) { first = value; return true; }
	else { cout << "Error"; return false; }
}
bool Fraction::setSecond(int value)
{
	if (value > 0) { second = value; return true; }
	else { cout << "Error"; return false; }
}
bool Fraction::init(int first, int second)
{
	return setFirst(first) && setSecond(second);
}

void Fraction::read()
{
	int a, b;
	
	do {
		cout << "Enter first: "; cin >> a;
		cout << "Enter second: "; cin >> b;
	} while (!init(a, b));
}

void Fraction:: display() const
{
	cout << "Fraction: " << first << "/" << second << endl;
}


unsigned int Fraction::ipart()
{
	if (second == 0) { cout << "Error" << endl; return 0; }

	return first / second;
}