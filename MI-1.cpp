#include <iostream>
using std::cout;
using std::cin;

int PedirNumero (int a)
{
    cout <<"Ingrese un numero: ";
    cin >> a;
    return a;

}

int main ()
{
    bool salir = false;

    do
    {
        char opcion;
        int a;

        cout << "Elija la operacion que desea realizar.\n";
        cout << "1. Suma.\n";
        cout << "2. Resta.\n";
        cout << "3. Producto.\n";
        cout << "0. Salir. \n\n";
        cout << "Opcion: ";
        cin >> opcion;
        cout << "\n";

        switch (opcion)
        {
        case '1':
            {
            int suma = PedirNumero(a) + PedirNumero(a);
            cout << "La suma es: " << suma << "\n\n";
            break;
            }
        case '2':
            {
            int resta = PedirNumero(a) - PedirNumero(a);
            cout << "La resta es: " << resta << "\n\n";
            break;
            }
        case '3':
            {
            int producto = PedirNumero(a) * PedirNumero(a);
            cout << "El producto es: " << producto << "\n\n";
            break;
            }
        case '0':
            {salir = true;
            cout << "Hasta la proxima!!! \n\n";
            break;
            }
        default:
            cout << "Opcion incorrecta, elija otra. \n\n";
            break;
        }
    } while (not salir);
}
