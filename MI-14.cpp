/*MI-14
Dados 50 números enteros, informar el promedio de los mayores que 100 y la
suma de los menores que –10*/
#include <iostream>

using std::cin;
using std::cout;

int main ()
{
    int suma2,numero;
    double suma1, cociente,divisor;
    suma1=0;
    suma2=0;
    divisor=0;
    cout << "Ingrese 10 numeros y se dara el promedio de los mayores de 100 y la suma de los menores de -10. \n\n";
    for (int i=1; i<=10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero>100)
        {
            suma1=suma1 + numero;
            divisor=++divisor ;
        }
        if (numero<-10)
            suma2=suma2 + numero;
    }
    cociente=suma1/divisor;
    cout << "El promedio de los mayores a 100 es: " << cociente << "\n";
    cout << "La suma de los menores a -10 es: " << suma2 << "\n";
}
