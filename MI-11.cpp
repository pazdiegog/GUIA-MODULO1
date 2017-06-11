#include <iostream>
using std::cout;
using std::cin;

int main()
{
    signed edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad<=12)
        cout << "Es menor";
        else if (edad>=13 && edad<=18)
            cout << "Es cadete";
            else if (edad>18 && edad<=26)
                cout << "Es juvenil";
                else
                    cout << "Es mayor";
}
