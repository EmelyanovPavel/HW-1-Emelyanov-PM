//найти гипотенузу прямоугольного треугольника по двум катетам
 
#include <cstdio>
#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int gipotenuse = sqrt((a * a) + (b * b));

	cout << "Length of a hypotenuse = " << gipotenuse << endl;

	return 0;
}
