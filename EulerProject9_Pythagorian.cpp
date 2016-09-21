/*
#There exists exactly one Pythagorean triplet for which a + b + c = 1000.
#Find the product abc.

# If a**2 + b**2 = c**2, then we found the solution.
refnum = 1000
for a in range(1, refnum) :
	for b in range(1, refnum) :
		d2 = a**2 + b**2
		c = refnum - a - b
		if (c>0 and d2 == c**2) :
			print a, b, c, a*b*c
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int refnum = 1000;
	for (int a = 1; a < refnum; a++) {
		for (int b = 1; b < refnum; b++) {
			int d2 = pow(a, 2) + pow(b, 2);
			int c = refnum - a - b;
			if (c > 0) {
				if (d2 == pow(c, 2)) {
				cout << a << " " << b << " " << c << " " << " the product is " << a*b*c << endl;
			    }
			}
		}
	}
	system("pause");
	return 0;
}