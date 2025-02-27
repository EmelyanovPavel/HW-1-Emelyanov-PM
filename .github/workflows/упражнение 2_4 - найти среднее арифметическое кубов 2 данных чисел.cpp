// найти среднее арифметическое кубов 2 данных чисел
#include <iostream>
#include <cmath>

using namespace std;

int main() 
 {

    double a, b;
    cin >> a >> b;

    auto avg = (a * a * a + b * b * b) / 2.0;

    cout << avg << '\n';

    return 0;
}
