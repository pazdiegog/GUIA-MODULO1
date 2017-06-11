#include <iostream>
using std::cout;
using std::cin;

int main()
{
    signed sumatoria=0;
    for (signed i=1; i<=100; i++)
    {
        cout << i <<"\n";
        sumatoria = sumatoria + i;
    }
    cout << "La sumatoria de los primeros 100 numeros naturales es: " << sumatoria;
}
