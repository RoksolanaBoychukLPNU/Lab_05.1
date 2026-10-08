#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y)
{
    return x / abs(x * x * x + y * y * y) + y / abs(x + y);
}

int main()
{
    double p, q;                                 // вхідні дані

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    if (p < 0 || q < 0)              // sqrt() визначений лише для p, q >= 0
    {
        cout << "p and q must be >= 0" << endl;
        return 1;
    }

    double c = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);

    cout << "c = " << c << endl;

    return 0;
}

// допоміжна функція k(x, y)
// x, y - параметри-значення (const - не змінюються у функції)

