//9) определить, является ли сумма чисел двузначного числа четной
 
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

   int number1, number2;
   cin >> number1 >> number2;

	cout << "Created number: " << number1 << number2 << endl;

	if ((number1 + number2) % 2 == 0) cout << "Yes";
	else cout << "No";

	return 0;
}

//10) определить, является ли сумма чисел двузначного числа нечетной
 
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

   int number1, number2;
   cin >> number1 >> number2;

	cout << "Created number: " << number1 << number2 << endl;

	if ((number1 + number2) % 2 != 0) cout << "Yes";
	else cout << "No";

	return 0;
}
