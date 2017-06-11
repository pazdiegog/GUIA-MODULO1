#include <iostream>

using std::cin;
using std::cout;


int main()
{
    int valor, valor2;
    cout << "Ingresamos 10 valores y buscaremos el mayor. \nIngrese valor: ";
    cin >> valor;
    int valorMayor= valor;
    for (int i=1; i<=10; i++)
    {
        cout << "Ingrese valor: ";
        cin >> valor2;
        if (valorMayor<valor2)
            valorMayor=valor2;
    }
    cout << "El mayor numero es: " << valorMayor;
}
