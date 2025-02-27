// найти среднее геометрическое модулей 2 данных чисел

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

    long double a, b;
    cin >> a >> b;

    // среднее арифметическое чисел
    cout << (a + b) / 2 << endl;  
    // среднее геометрическое модулей чисел
    cout << sqrt(abs(a * b)) << endl;  

    return 0;
}
