#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
        string oracion;
        int cantidadPalabras,cantidadVocales, letrasPorPalabra,espacios,palabraMayor;
        espacios=0;
        palabraMayor=0;
        letrasPorPalabra=0;
        cantidadVocales=0;
        cantidadPalabras=0;

        cout << "Ingrese una oracion: ";
        getline(cin,oracion);

        for (int i=0; i<=oracion.size();i++)
        {
            if ((oracion[i]=='a') || (oracion[i]=='e') || (oracion[i]=='i') ||(oracion[i]=='o') || (oracion[i]=='u'))
                cantidadVocales++;//habria q ajustar con un contador para cada vocal, pero no hay ganas.
            if ((oracion[i]!=' ') && (i<oracion.size()))
                letrasPorPalabra++;
            if (letrasPorPalabra==1)
                ++cantidadPalabras;
            if (letrasPorPalabra>palabraMayor)
                palabraMayor=letrasPorPalabra;
            if (oracion[i]==' ')
                {

                    ++espacios;
                    letrasPorPalabra=0;
                }
        }
        cout << "Cantidad de vocales: " << cantidadVocales << "\n";
        cout << "Cantidad de espacios: " << espacios << "\n";

        cout << "Cantidad de letras que posee la palabra mas larga: " << palabraMayor << "\n";
}
