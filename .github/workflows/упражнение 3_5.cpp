//5) определить, оканчивается ли число цифрой 7.

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

   int n;
   cout << "Enter a number: " << endl;
   cin >> n;

   if (n % 10 == 7) cout << "Yes" << endl;
   else cout << "No" << endl;

   return 0;
}
