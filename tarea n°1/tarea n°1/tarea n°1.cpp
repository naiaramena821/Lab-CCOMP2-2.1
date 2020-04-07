#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//1

int main()
{
    string nombre;
    string ho;
    string direc;
    int edad;
    int telef;
    cout << "¿como te llamas? ";
    cin >> nombre;
    cout << "edad: ";
    cin >> edad;
    cout << "numero de telefono: ";
    cin >> telef;
    cout << "direccion: ";
    cin >> direc;
    cout << "hobby: ";
    cin >> ho;
    cout << endl;
    cout << "me llamo " << nombre << " mi edad es " << edad << endl;
    cout << "mi numero telefonico es " << telef << "," << "vivo en " << direc << endl;
    cout << "y mi hobby es " << ho << endl;
}

//2
int main()
{
    float a, b;
    char operador;
    cout << "elige una operacion: " << endl;
    cin >> operador;
    cout << "numero 1: " << endl;
    cin >> a;
    cout << "numero 2: " << endl;
    cin >> b;
    switch (operador)
    {
    case '+':
        cout << "suma: " << a + b;
    case '-':
        cout << "resta: " << a - b;
    case '*':
        cout << "multiplicacion: " << a * b;
    case '/':
        cout << "division: " << a / b;
    case '<':
        cout << "raiz cuadrada " << sqrt(a) << endl;
        cout << "raiz cuadrada " << sqrt(b);
    }
    return 0;
}

//3
int main()
{
    float radio, lado, b, a;
    float semi, x, y, z;
    int area;
    cout << "areas disponibles:1.circulo'\t'2.cuadrado'\t'3.triangulo'\t'4.isoceles'\t'5.equilatero'\t'6.escaleno" << endl;
    cin >> area;
    if (area == 1)
    {
        cout << "radio: ";
        cin >> radio;
        cout << "area de un circulo: " << 3.14 * radio;
    }
    else if (area == 2)
    {
        cout << "lado: ";
        cin >> lado;
        cout << "area de un cuadrado: " << lado * lado;
    }
    else if (area == 3)
    {
        cout << "base: ";
        cin >> b;
        cout << "altura: ";
        cin >> a;
        cout << "area de un triangulo: " << (b * a) / 2;
    }
    else if (area == 4)
     {
        cout << "base: ";
        cin >> b;
        cout << "altura: ";
        cin >> a;
        cout << "area de un triangulo isoceles: " << b * sqrt((a * a) - (b * b) / 4) / 2;
    }
    else if (area == 5)
    {
        cout << "altura: ";
        cin >> a;
        cout << "area de un triangulo equilatero: " << sqrt(3) / 4 * 2;
    }
    else if (area == 6)
    {
        cout << "lados: ";
        cin >> x >> y >> z;
        semi= (x + y + z) / 2;
        cout << "area de un triangulo escaleno(mediante formula de heron): " << sqrt(semi * (semi - x) * (semi - y) * (semi - z));
    }
    return 0;

}