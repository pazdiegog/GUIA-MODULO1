#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int N,M, total;
    total=0;
    cout << "Este programa informa la multiplicacion de dos numeros por sumas sucesivas \n";
    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "Ingrese otro numero: ";
    cin >> M;
    for (int i=1; i<=M; i++)
        total= N + total;
    cout << "La suma es: " << total;
}
