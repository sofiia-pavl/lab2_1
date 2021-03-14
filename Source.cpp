#include <iostream>
#include "Combination.h"


int main()
{
	cout << "Enter two numbers(first<second)" << endl << endl;
	Combination k;
	cin >> k;

	cout <<"k++" << endl << k++ << endl;
	cout <<"k" << endl << k << endl;
	cout << "--k" << endl << --k << endl;
	cout << "k" << endl << k << endl;

	cout << "Combination of changed numbers:" << endl << endl;
	cout << "Combination(n,k) = " << k.combination() << endl << endl;

	cout << "Enter two numbers(first<second)" << endl << endl;
	Combination c;
	cin >> c;

	cout << "Combination of numbers:" << endl << endl;
	cout << "Combination(n,k) = " << c.combination() << endl;

	return 0;
}