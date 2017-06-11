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
    bool ValidacionDistintos = false;
    int a;
    int b;
        do
        {
        cout << "Ingrese dos numeros distintos \n\n";
        a = PedirNumero(a);
        b = PedirNumero(b);
        if (a!=b)
            ValidacionDistintos = true;
            else
                cout << "ERROR, deben ser numeros distintos \n\n";

        }
        while (not ValidacionDistintos);
    if (a>b)
        cout << a << " es mayor que " <<b;
            else if (a<b)
                cout << b << " es mayor que " <<a;


}
