/*Ej. MI-17: Se ingresa un conjunto de valores float, cada uno de los cuales representan el
sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.*/

#include <iostream>

using namespace std;

int main()
{
    int cantidadA=0;
    int cantidadB=0;
    int cantidadC=0;
    int cantidadD=0;
    float valor;

    do
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        if ((valor<1520) && (valor!=0))
            ++cantidadA;
        if ((valor>1520) && (valor<2780))
            ++cantidadB;
        if ((valor>2780) && (valor<5999))
            ++cantidadC;
        if (valor>5999)
            ++cantidadD;

    } while (valor!=0);

    cout << "Empleados que ganan menos de $1.520: " << cantidadA << "\n";
    cout << "Empleados que ganan $1.520 o mas pero menos de $2.780: " << cantidadB <<"\n";
    cout << "Empleados que ganan $2.780 o mas pero menos de $5.999: " << cantidadC <<"\n";
    cout << "Empleados que ganan $5.999 o mas: " << cantidadD <<"\n";
}
