// определить, является ли число четным

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	if (n % 2 == 0) cout << "Number is even";
	else cout << "Number is odd";

	return 0;
}
