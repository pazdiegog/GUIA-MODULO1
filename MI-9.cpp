//Ej. MI-9:  Dados un mes y el año correspondiente informar cuantos días tiene el mes.

#include <iostream>
using std::cout;
using std::cin;

signed ValidarMes (signed a)
{
    while (a<1 || a>12)
    {
        cout << "ERROR.\n\nIngrese un mes valido entre 1 y 12: ";
        cin >>a;
    }
    return a;
}

int main ()
{
    signed month, year;
    cout << "Este programa informa cuantos dias tiene el mes. \n\n";
    cout << "Ingrese el mes: ";
    cin >> month;
    month=ValidarMes(month);
    cout << "Ingrese el anio: ";
    cin >> year;
    if ((month%2!=0 && month<=7) || (month>=8 && month<=12 && month%2==0))
        cout <<"El mes tiene 31 dias";
        else if ((month%2==0 && month<=7 && month>2) || (month>=8 && month<=12 && month%2!=0))
            cout << "El mes tiene 30 dias";
            else if (month==2 && (year%4==0 && (year%100!=0 || year%400==0)))
                cout << "El mes tiene 29 dias";
                else
                    cout << "El mes tiene 28 dias";
}
