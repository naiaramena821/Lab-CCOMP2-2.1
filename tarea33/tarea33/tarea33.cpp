#include <iostream>
#include <math.h>
using namespace std;


int main()
{
   float a, b, c;
   int alfa, beta;
    int z;
    z = 1;
    cout << "ponga -1 al igual que la cantidad de valores que desea hayar" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> alfa;
    cin >> beta;

    if ((alfa >= 0) && (beta == -1))
    {
        beta = 90 - alfa;
        cout << beta << endl;
    }
    if ((beta >= 0) && (alfa == -1))
    {
        alfa = 90 - beta;
        cout << alfa << endl;
    }
    if (alfa + beta == 90)
    {
        cout << "PERMITIDO" << endl;
    }
    else
    {
        cout << "Error" << endl;
        system("pause");
    }
    if (a < c && b < c)
    {
        cout << "la hipotenusa es: " << c << endl;
    }
    else if((a>0)&&(b>0)&&(c==-1))
    {
        c = sqrt((a * a) + (b * b));
        cout << "hipotenusa: " << c << endl;
    }
    if((a == -1)&&(b > 0) && (c > 0))
    {
        a = sqrt((c * c) - (b * b));
        cout <<"cateto: "<< a << endl;
    }
    if ((b == -1)&&(a > 0) && (c > 0))
    {
        b = sqrt((c * c) - (a * a));
        cout <<"cateto:" << b << endl;
    }
    cout << "AREA: " << endl;
    cout << ((a * b) / 2) << endl;
    cout << "ALTURA: " << endl;
    cout << ((a * b) / c) << endl;
    cout << "PERIMETRO: " << endl;
    cout << (a + b + c) << endl;
    cout << "seno coseno y tangente del angulo mayor: " << endl;
    cout << "sen: " <<(a / c) << endl;
    cout << "cos: " << (b / c) << endl;
    cout << "tan: " << (a / b) << endl;
    cout << "seno coseno y tangente del angulo menor: " << endl;
    cout << "sen: " << (b / c) << endl;
    cout << "cos: " << (a / c) << endl;
    cout << "tan: " << (b / a) << endl;
    cout << "INRADIO: " << endl;
    cout << ((a * b) / (a + b + c)) << endl;
    cout << "GRAFICO: " << endl;
   //ciclo para avanzar la fila
    for (int f = 0 ; f < a; f++)
    {
        while (z < b)
        {
            cout << "@ " ;
        
       //avanzar las columnas
        
            for(int k = 0; k < z; k++)
            {
                cout << "@ ";

            }
           z++;  
           cout << "\n";
        }
    }
    return 0;
}
    


