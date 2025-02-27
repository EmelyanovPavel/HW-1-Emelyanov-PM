//7) определить, какая из цифр двухзначного числа больше.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

   int number1, number2;
   cin >> number1 >> number2;

   cout << "Created number: " << number1 << number2 << endl;

   if (number1 > number2) cout << "the 1st digit is more than 2nd digit" << endl;
   else cout << "the 2nd digit is more than 1st digit" << endl;

   return 0;
}
