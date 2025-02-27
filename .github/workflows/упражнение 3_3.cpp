// определить, является ли число нечетным

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	if (n % 2 != 0) cout << "Number is odd";
	else cout << "Number is even";

	return 0;
}
