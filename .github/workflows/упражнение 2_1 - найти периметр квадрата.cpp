// найти периметр квадрата, площадь которого равна а.

#include <cstdio>
#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{
 
	int a;
	cout << "Enter a square value: " << endl;
	cin >> a;

	int perimeter = sqrt(a) * 4;

	cout << "Perimeter = " << perimeter << endl;

	return 0;
}
