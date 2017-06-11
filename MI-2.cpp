#include <iostream>
using std::cout;
using std::cin;

int main ()
{
    signed Day, Month, Year, Fecha;
    do
    {
        cout << "Ingrese el dia: ";
        cin >> Day;
        if (Day>31 || Day<1)
            cout << "Dia incorrecto, ingrese otro. \n\n";
    }
    while (Day>31 || Day<1);

    do
    {
        cout << "Ingrese el mes: ";
        cin >> Month;
        if (Month>12 || Month<1)
            cout << "Mes Incorrecto, ingrese otro. \n\n";
    }
    while (Month>12 || Month<1);

    cout << "Ingrese el anio: ";
    cin >> Year;
    if (Year<100 && Year>0)
        cout << "La fecha ingresada es 00" << Year << Month <<Day;
        else if (Year<1000 && Year>99)
            cout << "La fecha ingresada en formato (AAAAMMDD) es 0" << Year << Month <<Day;
                else
                    cout << "La fecha ingresada en formato (AAAAMMDD) es " << Year << Month <<Day;
}
