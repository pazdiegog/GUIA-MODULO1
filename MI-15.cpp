/*MI-15
Se realiza una inspección en una fábrica de pinturas, y se detectaron 20
infracciones. De cada infracción se tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
. Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
. La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean
mayor a 3.*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

    struct t_infraccion
    {
        unsigned ClaseInfraccion;//1,2,3,4
        string MotivoInfraccion;
        int ValorMulta;
        char GravedadInfraccion;//{Leve='L',Medio='M',Grave='G'}

    };
t_infraccion infraccion;
t_infraccion IngresoDeDatos(t_infraccion);

    void IngresoDeDatos(t_infraccion infraccion,t_infraccion *puntero)
    {

        cout << "Ingrese el tipo de infraccion(1,2,3,4): ";
        cin >> infraccion.ClaseInfraccion;
        cout << "Ingrese la gravedad de la Infraccion(L,M,G): ";
        cin >> infraccion.GravedadInfraccion;
        cout << "Ingrese el valor de la multa: ";
        cin >> infraccion.ValorMulta;
        cin.ignore(256,'\n');
        cout << "Ingrese motivo de infraccion: ";
        getline(cin,infraccion.MotivoInfraccion);
        *puntero=infraccion;
    }
int main ()
{
    int CantidadInfracciones, ValorMultaTotal;
    t_infraccion puntero;
    ValorMultaTotal=0;
    CantidadInfracciones=0;
    for (int i=1; i<=5; i++)
    {
        IngresoDeDatos(infraccion,&puntero);
        ValorMultaTotal= ValorMultaTotal + puntero.ValorMulta;
        if (((puntero.ClaseInfraccion==3) || (puntero.ClaseInfraccion==4)) && ((puntero.GravedadInfraccion=='g') || (puntero.GravedadInfraccion=='G')))
            CantidadInfracciones= ++CantidadInfracciones;
    }
    cout << "Cantidad de infracciones graves: " << CantidadInfracciones << "\n";
    cout << "Valor total de la multa a pagar: " << ValorMultaTotal << "\n";
    if (CantidadInfracciones>3)
        cout << "Clausurar fabrica!!!";
}
