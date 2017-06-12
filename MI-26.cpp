/*Ej. MI-26: Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo(un valor de 1 a 3).
Se pide calcular e informar:
1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto*/

#include <iostream>

using std::cout;
using std::cin;

struct t_contenedor
{
    int id;
    double peso;
    unsigned puerto;
};

t_contenedor contenedor;

void IngresoDeDatos(t_contenedor contenedor, t_contenedor *puntero)
{
    cout << "Ingrese el ID del contenedor: ";
    cin >> contenedor.id;
    cout << "Ingrese el peso del contenedor: ";
    cin >> contenedor.peso;
    cout << "Ingrese el puerto destino: ";
    cin >> contenedor.puerto;
    *puntero=contenedor;
}

int main()
{
    t_contenedor puntero;
    double pesoMayor=0;
    double pesoTotal=0;
    int idMayor= 0;
    int cantidadPuerto1=0;
    int cantidadPuerto2=0;
    int cantidadPuerto3=0;
    for (int i=1; i<=3; i++)
    {
        IngresoDeDatos(contenedor,&puntero);
        pesoTotal = pesoTotal + puntero.peso;
        if (puntero.peso>pesoMayor)
        {
            pesoMayor=puntero.peso;
            idMayor=puntero.id;
            cout << idMayor;
        }
        if (puntero.puerto==1)
            ++cantidadPuerto1;
        if (puntero.puerto==2)
            ++cantidadPuerto2;
        if (puntero.puerto==3)
            ++cantidadPuerto3;
    }
    cout << "El peso total que el buque debe trasladar es: " << pesoTotal << "\n";
    cout << "El ID del contenedor mas pesado es: " << idMayor << "\n";
    cout << "Al puerto 1 debe trasladar " << cantidadPuerto1 << " contenedores\n";
    cout << "Al puerto 2 debe trasladar " << cantidadPuerto2 << " contenedores\n";
    cout << "Al puerto 3 debe trasladar " << cantidadPuerto3 << " contenedores\n";
}
// FALTAN VALIDACIONES DE PUERTO Y DE PESO EN CASO DE QUE SEAN IGUALES LOS PESOS.
