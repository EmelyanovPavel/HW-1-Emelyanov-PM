#include <cstdio>
#include <iostream> 
#include <cmath>

using namespace std;

int main() 
 {
 
	int x;
	cout << "Enter x: " << endl;
	cin >> x;

	int chislit1 = (3 + x);
	int znam1{3};
	int chislit2 = (abs(x)) * 2 + ((x * x * x) + 4);
	int znam2{ 2 };

	cout << "Solution: " << endl;
	cout << chislit1 << "/" << znam1 << " + " << chislit2 << "/" << znam2 << " = " << chislit1 * znam2 << "/" << znam1 * znam2 << " - " << chislit2 * znam1 << "/" << znam2 * znam1 << " = " << endl;
	cout << (chislit1 * znam2) - (chislit2 * znam1) << "/" << znam2 * znam1 << " = " << ((chislit1 * znam2) - (chislit2 * znam1)) / (znam2 * znam1) << endl;

	return 0; 
}
