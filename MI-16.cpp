/*Ej. MI-16: Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
Informar la cantidad de valores ingresados. */

#include <iostream>

using namespace std;

int main()
{
    int cantidad=0;
    int valor;
    do
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        ++cantidad;
    } while (valor>=0);
    cout << "La cantidad de valores ingresados son: " << cantidad;
}
