#include "Fraction.h"
#include <iostream>
using namespace std;

int main()
{
	Fraction a;
	a.read();
	a.display();
	cout << "Conclusion: " << a.ipart() << endl;
	return 0;
}