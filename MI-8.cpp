#include <iostream>
using std::cout;
using std::cin;

signed ValidarNumero (signed a)
{
    while (a<=0)
    {
        cout << "ERROR.\n\nIngrese un numero entero positivo: ";
        cin >>a;
    }
    return a;
}

int main ()
{
    signed a,b,c;
    cout << "Ingrese los lados de un triangulo para determinar si es equilatero, isosceles o escaleno \n\n";
    cout << "L1: ";
    cin >> a;
    a = ValidarNumero (a);
    cout << "L2: ";
    cin >> b;
    b= ValidarNumero (b);
    cout << "L3: ";
    cin >> c;
    c= ValidarNumero (c);
    if (a==b && b==c)
        cout << "Es equilatero.";
        else if (a==b || b==c || a==c)
            cout << "Es isosceles.";
            else
                cout << "Es escaleno";
}
