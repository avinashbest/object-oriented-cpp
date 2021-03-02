#include <iostream>
#include "fraction.cpp"
using namespace std;

int main()
{
	fraction f1(10, 3);
	fraction f2(5, 2);

	//  f1.add(f2);

	// f1.print();
	// f2.print();

	// f1.multiply(f2);

	// f1.print();
	// f2.print();

	// fraction const f3(11, 4);
	// cout << f3.getNumerator() << " " << f3.getDenominator() << endl;

	// fraction f3 = f1.add(f2);

	// cout << "\nFraction f1 = ";
	// f1.print();
	// cout << "Fraction f2 = ";
	// f2.print();

	// cout << "\nAfter Addition: " << endl;
	// cout << "Fraction f3 = ";
	// f3.print();

	// fraction f4 = f1 + f2;
	// cout << "Fraction f4 = ";
	// f4.print();

	// cout << "\nAfter Multiplication: " << endl;
	// f3 = f1 * f2;
	// cout << "Fraction = ";
	// f3.print();

	// cout << "\nChecking Equality: " << endl;
	// if (f1 == f2)
	// {
	// 	cout << "Equal" << endl;
	// }
	// else
	// {
	// 	cout << "Not Equal" << endl;
	// }

	// f1.print();
	// ++f1;

	// f1.print();
	// fraction f3 = ++(++f1);
	// f1.print();
	// f3.print();

	// fraction f3 = ++f1;
	// f1.print();
	// f3.print();

	// fraction f3 = f1++;
	// f1.print();
	// f3.print();

	(f1 += f2) += f2;
	f1.print();
	f2.print();

	return 0;
}
