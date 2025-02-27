//8) определить, одинаковы ли числа данного двухзначного числа.

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

   int number1, number2;
   cin >> number1 >> number2;

   cout << "Created number: " << number1 << number2 << endl;

   if (number1 == number2) cout << "Yes" << endl;
   else cout << "No" << endl;

   return 0;
}
