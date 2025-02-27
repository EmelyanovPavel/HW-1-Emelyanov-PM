//11) определить, кратна ли трем сумма цифр двухзначного числа

#include <iostream>
#include <cmath>

using namespace std;

int main() {

   int number1, number2;
   cin >> number1 >> number2;

	cout << "Created number: " << number1 << number2 << endl;

	if ((number1 + number2) % 3 == 0) cout << "Yes";
	else cout << "No";

	return 0;
}

//12) определить, кратна ли числу А сумма цифр двухзначного числа
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int number1, number2, a;
    cin >> number1 >> number2 >> a;

	cout << "Created number: " << number1 << number2 << endl;

	if ((number1 + number2) % a == 0) cout << "Yes";
	else cout << "No";

	return 0;
}
