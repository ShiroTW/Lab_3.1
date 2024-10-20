#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    double x = 0;
    double y = 0;
    double a = 0;
    double b = 0;
    cout << "Введіть x" << endl;
    cin >> x;
    y = abs(pow(x, 3));
        if (x < -1);
        {
            a = abs(2 + x) + sin(pow(x, 2));
        }
    if (x >= -1 && x <= 1)
    {
        a = tan(pow(x, 3) + 1) + 1;
    }
    if (x > 1)
    {
        a = exp(cos(x)) + log10((1 / x) + 1);
    }

    cout << "Скорочений результат: " << y + a << endl;

    y = abs(pow(x, 3));
    if (x < -1)
        {
            b = abs(2 + x) + sin(pow(x, 2));
        }
    else if (x >= -1 && x <= 1)
        {
            b = tan(pow(x, 3) + 1) + 1;
        }
        else
        {
            b = exp(cos(x)) + log10((1 / x) + 1);
        }

    cout << "Повний результат: " << y + b;
    return 0;
}
