//13) определить, какая из цифр трехзначного числа больше (первая или последняя).

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

   int number1, number2, number3;
   cin >> number1 >> number2 >> number3;

   cout << "Created number: " << number1 << number2 << number3 << endl;

   if (number1 > number3) cout << "the 1st digit is more than last digit" << endl;
   else cout << "the last digit is more than 1st digit" << endl;

   return 0;
}

//15) определить, какая из цифр трехзначного числа больше (вторая или последняя).

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

   int number1, number2, number3;
   cin >> number1 >> number2 >> number3;

   cout << "Created number: " << number1 << number2 << number3 << endl;

   if (number2 > number3) cout << "the 2nd digit is more than last digit" << endl;
   else cout << "the last digit is more than 2nd digit" << endl;

   return 0;
}
