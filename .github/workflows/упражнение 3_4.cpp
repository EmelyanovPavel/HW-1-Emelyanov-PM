//4) определить, делится ли целое число м на целое число н.

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

	int m, n;
	cin >> m >> n;

	if (m % n == 0) cout << m / n; //частное от деления
	else cout << "M is not completely divisible by N"; //M на N нацело не делится

	return 0;
}
