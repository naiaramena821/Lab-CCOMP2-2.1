#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int x, y;
    cout << "ingrese dos numeros: " << endl;
    cin >> x;
    cin >> y;
    cout << "suma: " << x + y << endl;
    cout << "resta: " << x - y << endl;
    cout << "multiplicacion: " << x * y << endl;
    cout << "division: " << endl;
    if (y == 0)
    {
        cout << "imposible..." << endl;
    }
    else
    {
        cout << x / y << endl;
    }
    if (x == 0)
    {
        cout << "imposible..." << endl;
    }
    else
    {
        cout << y / x << endl;
    }
    cout << "residuo: " << endl;
    if (y == 0)
    {
        cout << "error" << endl;
    }
    else
    {
        cout << x % y << endl;
    }
    if (x == 0)
    {
        cout << "error" << endl;
    }
    else
    {
        cout << y % x << endl;
    }
    cout << "mayor numero: ";
    if (x > y)
        cout << x << " es el mayor" << endl;
    else
        cout << y << " es el mayor" << endl;
    cout << "menor numero: ";
    if (x < y)
        cout << x << " es el menor" << endl;
    else
        cout << y << " es el menor" << endl;

    cout << "Si uno de los numeros es divisor del otro numero: ";
    if (y == 0)
    {
        cout << "imposible D:" << endl;
    }
    else if (x % y == 0)
        cout << y << " es divisor de " << x << endl;
    else
    {
        cout << " no es divisor" << endl;
    }
    if (x == 0)
    {
        cout << "imposible :(" << endl;
    }
    else if (y % x == 0)
        cout << x << " es divisor de " << y << endl;
    else
        cout << " no es divisor" << endl;
    return 0;
}

int  main()
{
    char operador;
    float a, b;
    int c, d;
    cout << "elija uno +,-,*,/,%,~" << endl;
    cin >> operador;
    if (operador == '+')
    {
        cout << "dos numeros: ";
        cin >> a;
        cin >> b;
        cout << a + b << endl;
    }
    else if (operador == '-')
    {
        cout << "dos numeros: ";
        cin >> a;
        cin >> b;
        cout << a - b << endl;
    }
    else if (operador == '*')
    {
        cout << "dos numeros: ";
        cin >> a;
        cin >> b;
        cout << a * b << endl;
    }
    else if (operador == '/')
    {
        cout << "dos numeros: ";
        cin >> a;
        cin >> b;
        cout << a / b << endl;
    }
    else if (operador == '%')
    {
        cin >> d;
        cin >> c;
        cout << c % d << endl;
    }
    else if (operador == '~')
    {
        cout << "un numero: ";
        cin >> a;
        cout << sqrt(a) << endl;
    }
}
