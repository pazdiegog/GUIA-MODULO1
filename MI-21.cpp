/*Ej. MI-21: Dados N valores informar el mayor, el menor y en que posición del conjunto
fueron ingresados.*/
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int valor, valor2, i;
    cout << "Ingresar la cantidad de numeros que desea ingresar: ";
    cin >> i;
    cout << "Ingrese valor: ";
    cin >> valor;
    int valorMayor= valor;
    int valorMenor= valor;
    int posicionMenor= 1;
    int posicionMayor= 1;
    for (int a=2; a<=i; a++)
    {
        cout << "Ingrese valor: ";
        cin >> valor2;
        if (valorMayor<valor2)
        {
            valorMayor=valor2;
            posicionMayor=a;
        }
        if (valorMenor>valor2)
        {
            valorMenor=valor2;
            posicionMenor=a;
        }
    }
    cout << "El mayor numero es: " << valorMayor << " y su posicion es: " << posicionMayor << "\n";
    cout << "El menor numero es: " << valorMenor << " y su posicion es: " << posicionMenor << "\n";
}
