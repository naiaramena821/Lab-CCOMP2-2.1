#include <iostream>
#include <stdlib.h>//para system("cls")
using namespace std;

int main()
{
    char c1 = '1', c2 = '2', c3 = '3', c4 = '4', c5 = '5', c6 = '6', c7 = '7', c8 = '8', c9 = '9', ubicacion, respuesta;
    char jugador1 = 'X', jugador2 = 'O', computador = 'O';
    int  ganar = 0, i = 0, opcion, j = 0, rang,empate = 0;
    cout << "modo de juego: " << endl;
    cout << "1.Multijugador\n2.1 Jugador" << endl;
    cin >> opcion;
    if (opcion == 1)
    {
        cin >> i;
        while (i <= 10)

        {
            cout << "\t" << c1 << "|" << c2 << "|" << c3 << "\n";
            cout << "\t" << "------" << endl;
            cout << "\t" << c4 << "|" << c5 << "|" << c6 << "\n";
            cout << "\t" << "------" << endl;
            cout << "\t" << c7 << "|" << c8 << "|" << c9 << "\n";
            i++;

            cout << "turno del jugador" << jugador1 << endl;
            cout << "escribe la posicion donde desees colocar tu ficha" << endl;
            cin >> ubicacion;
            if (ubicacion == '1' && c1 == '1') {
                c1 = jugador1;
            }
            else if (ubicacion == '2' && c2 == '2') {
                c2 = jugador1;
            }
            else if (ubicacion == '3' && c3 == '3') {
                c3 = jugador1;
            }
            else if (ubicacion == '4' && c4 == '4') {
                c4 = jugador1;
            }
            else if (ubicacion == '5' && c5 == '5') {
                c5 = jugador1;
            }
            else if (ubicacion == '6' && c6 == '6') {
                c6 = jugador1;
            }
            else if (ubicacion == '7' && c7 == '7') {
                c7 = jugador1;
            }
            else if (ubicacion == '8' && c8 == '8') {
                c8 = jugador1;
            }
            else if (ubicacion == '9' && c9 == '9') {
                c9 = jugador1;
            }
            else {
                cout << "Movimiento no Valido" << endl;
            }
            cout << "turno del jugador" << jugador2 << endl;
            cout << "escribe la posicion donde desees colocar tu ficha" << endl;
            cin >> ubicacion;

            if (ubicacion == '1' && c1 == '1') {
                c1 = jugador2;
            }
            else if (ubicacion == '2' && c2 == '2') {
                c2 = jugador2;
            }
            else if (ubicacion == '3' && c3 == '3') {
                c3 = jugador2;
            }
            else if (ubicacion == '4' && c4 == '4') {
                c4 = jugador2;
            }
            else if (ubicacion == '5' && c5 == '5') {
                c5 = jugador2;
            }
            else if (ubicacion == '6' && c6 == '6') {
                c6 = jugador2;
            }
            else if (ubicacion == '7' && c7 == '7') {
                c7 = jugador2;
            }
            else if (ubicacion == '8' && c8 == '8') {
                c8 = jugador2;
            }
            else if (ubicacion == '9' && c9 == '9') {
                c9 = jugador2;
            }
            else {
                cout << "Movimiento no Valido" << endl;
            }
            if (c1 == 'X')
            {
                if (c2 == c1 && c3 == c1)
                {
                    ganar = 1;
                }
                if (c4 == c1 && c7 == c1)
                {
                    ganar = 1;
                }
            }
            if (c5 == 'X')
            {
                if (c2 == c5 && c8 == c5)
                {
                    ganar = 1;
                }
                if (c4 == c5 && c6 == c5)
                {
                    ganar = 1;
                }
                if (c7 == c5 && c3 == c5)
                {
                    ganar = 1;
                }
                if (c1 == 5 && c9 == c5)
                {
                    ganar = 1;
                }
            }
            if (c9 == 'X')
            {
                if (c7 == c9 && c8 == c9)
                {
                    ganar = 1;
                }
                if (c3 == c9 && c6 == c9)
                {
                    ganar = 1;
                }
            }
            if (c1 == 'O')
            {
                if (c2 == c1 && c3 == c1)
                {
                    ganar = 2;
                }
                if (c4 == c1 && c7 == c1)
                {
                    ganar = 2;
                }
            }
            if (c5 == 'O')
            {
                if (c2 == c5 && c8 == c5)
                {
                    ganar = 2;
                }
                if (c4 == c5 && c6 == c5)
                {
                    ganar = 2;
                }
                if (c1 == c5 && c9 == c5)
                {
                    ganar = 2;
                }
                if (c3 == 5 && c7 == c5)
                {
                    ganar = 2;
                }
            }
            if (c9 == 'O')
            {
                if (c7 == c9 && c8 == c9)
                {
                    ganar = 2;
                }
                if (c3 == c9 && c6 == c9)
                {
                    ganar = 2;
                }
            }
            if (c1 != '1' && c2 != '2' && c3 != '3' && c4 != '4' && c5 != '5' && c6 != '6' && c7 != '7' && c8 != '8' && c9 != '9' && ganar == 0)
            {
                empate = 1;
            }
            if (ganar == 1)
            {
                system("cls");
                cout << "jugador 1 ha ganado\n";
                
            }
            else if (ganar == 2)
            {
                system("cls");
                cout << "jugador 2 ha ganado\n";
                
            }
            else {
                cout << "EMPATE\n";
            }

        }
        cout << "jugar otra vez?" << endl;
        cin >> respuesta;
        if (respuesta == 'y')
        {
            system("cls");
            cin >> i;
        }
        else if (respuesta == 'n')
        {
            return 0;
        }
    }
    if (opcion == 2)
    {
        cin >> j;
        while (j <= 11)
        {
            cout << "\t" << c1 << "|" << c2 << "|" << c3 << "\n";
            cout << "\t" << "------" << endl;
            cout << "\t" << c4 << "|" << c5 << "|" << c6 << "\n";
            cout << "\t" << "------" << endl;
            cout << "\t" << c7 << "|" << c8 << "|" << c9 << "\n";
            j++;

            cout << "turno del jugador" << jugador1 << endl;
            cout << "escribe la posicion donde desees colocar tu ficha" << endl;
            cin >> ubicacion;
            if (ubicacion == '1' && c1 == '1') {
                c1 = jugador1;
            }
            else if (ubicacion == '2' && c2 == '2') {
                c2 = jugador1;
            }
            else if (ubicacion == '3' && c3 == '3') {
                c3 = jugador1;
            }
            else if (ubicacion == '4' && c4 == '4') {
                c4 = jugador1;
            }
            else if (ubicacion == '5' && c5 == '5') {
                c5 = jugador1;
            }
            else if (ubicacion == '6' && c6 == '6') {
                c6 = jugador1;
            }
            else if (ubicacion == '7' && c7 == '7') {
                c7 = jugador1;
            }
            else if (ubicacion == '8' && c8 == '8') {
                c8 = jugador1;
            }
            else if (ubicacion == '9' && c9 == '9') {
                c9 = jugador1;
            }
            else {
                cout << "Movimiento no Valido" << endl;
            }
            cout << "Turno del computador" << computador << endl;
            rang = 1 + rand() % 9;

            if (rang == 1 && c1 == '1') {
                c1 = computador;
            }
            else if (rang == 2 && c2 == '2') {
                c2 = computador;
            }
            else if (rang == 3 && c3 == '3') {
                c3 = computador;
            }
            else if (rang == 4 && c4 == '4') {
                c4 = computador;
            }
            else if (rang == 5 && c5 == '5') {
                c5 = computador;
            }
            else if (rang == 6 && c6 == '6') {
                c6 = computador;
            }
            else if (rang == 7 && c7 == '7') {
                c7 = computador;
            }
            else if (rang == 8 && c8 == '8') {
                c8 = computador;
            }
            else if (rang == 9 && c9 == '9') {
                c9 = computador;
            }
            else {
                cout << "Movimiento no Valido" << endl;
            }
            if (c1 == 'X')
            {
                if (c2 == c1 && c3 == c1)
                {
                    ganar = 1;
                }
                if (c4 == c1 && c7 == c1)
                {
                    ganar = 1;
                }
            }
            if (c5 == 'X')
            {
                if (c2 == c5 && c8 == c5)
                {
                    ganar = 1;
                }
                if (c4 == c5 && c6 == c5)
                {
                    ganar = 1;
                }
                if (c7 == c5 && c3 == c5)
                {
                    ganar = 1;
                }
                if (c1 == c5 && c9 == c5)
                {
                    ganar = 1;
                }
            }
            
            if (c9 == 'X')
            {
                if (c7 == c9 && c8 == c9)
                {
                    ganar = 1;
                }
                if (c3 == c9 && c6 == c9)
                {
                    ganar = 1;
                }
            }
            if (c1 == 'O')
            {
                if (c2 == c1 && c3 == c1)
                {
                    ganar = 2;
                }
                if (c4 == c1 && c7 == c1)
                {
                    ganar = 2;
                }
            }
            if (c5 == 'O')
            {
                if (c2 == c5 && c8 == c5)
                {
                    ganar = 2;
                }
                if (c4 == c5 && c6 == c5)
                {
                    ganar = 2;
                }
                if (c7 == c5 && c3 == c5)
                {
                    ganar = 2;
                }
                if (c1 == c5 && c9 == c5)
                {
                    ganar = 2;
                }
            }
            if (c9 == 'O')
            {
                if (c7 == c9 && c8 == c9)
                {
                    ganar = 2;
                }
                if (c3 == c9 && c6 == c9)
                {
                    ganar = 2;
                }

            }
            if (c1 != '1' && c2 != '2' && c3 != '3' && c4 != '4' && c5 != '5' && c6 != '6' && c7 != '7' && c8 != '8' && c9 != '9' && ganar == 0)
            {
                empate = 1;
            }
            if (ganar == 1)
            {
                system("cls");
                cout << "jugador 1 ha ganado" << endl;
            }
            else if (ganar == 2)
            {
                system("cls");
                cout << "Computador ha ganado" << endl;
                
            }
            else if (empate == 1)
            {
                system("cls");
                cout << "empate" << endl;
            }
        }
        cout << "jugar otra vez?" << endl;
        cin >> respuesta;
        if (respuesta == 'y')
        {
            system("cls");
            cin >> j;
        }
        if (respuesta == 'n')
        {
            return 0;
        }
        return 0;
    }
}