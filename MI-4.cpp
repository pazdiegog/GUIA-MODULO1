#include <iostream>
using std::cout;
using std::cin;

int main ()
{
    int a;
    cout << "Ingrese un valor: ";
    cin >> a;
    double QuintaParte = a/5;
    int Resto = a%5;
    double SeptimaParte = QuintaParte / 7;
    cout << "La quinta parte es: " << QuintaParte <<"\n";
    cout << "El resto de la division por 5 es: " <<Resto<<"\n";
    cout << "La septima parte de la quinta parte es: " <<SeptimaParte<<"\n";
    cout << "Hasta la proxima!!!";
}
