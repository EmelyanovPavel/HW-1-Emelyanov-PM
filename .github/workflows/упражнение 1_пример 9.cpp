#include <cstdio>
#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{
 
	int x;
	cout << "Enter x: " << endl;
	cin >> x;

	int chislit1 = abs(pow(x, 3) - pow(x, 2));
	int znam1{ 1 };
	int chislit2 = 7 * x;
	int znam2 = pow(x, 3) - (15 * x);

	cout << "Solution: " << endl;
	cout << chislit1 << " - " << chislit2 << "/" << znam2 << " = " << chislit1 * znam2 << "/" << znam1 * znam2 << " - " << chislit2 << "/" << znam2 << " = " << endl;
	cout << (chislit1 * znam2) - chislit2 << "/" << znam2 << " = " << ((chislit1 * znam2) - chislit2) / znam2 << endl;

	return 0;
}
