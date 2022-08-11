#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double e;
    int n = 1;
    double b, a, S;
    S = 0.0;
    a = 0.0;
    e = 0.0001;
        while (a < e) {
            b = (3 * n - 2) * (3 * n + 1);
            a = 1 / b;
            S += a;
            n = n + 1;
        }
    cout << "Сумма ряда,вычисленная с заданной точностью  =  " << S << endl;
    return 0;
}