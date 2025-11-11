#include <cstdint> //OK
#include <iostream>

int main()
{
    const int lenght = 3; // Bei der Länge von Arrays ist eine const Variable gemä? ISO C++ pflicht!

    float vector1[lenght] = {}; // Array wird automatisch mit 0 initialisiert
    float vector2[lenght] = {};

    // Ausgabe des Vectors
    for ( int i = 0; i < lenght; ++i )
    {
        std::cout << vector1[i] << " ";
    }
    std::cout << std::endl;

        for ( int i = 0; i < lenght; ++i )
    {
        std::cout << vector2[i] << " ";
    }
    std::cout << std::endl;


    // Benutzereingabe
    std::cout << "Bitte geben Sie die Werte an, die im Vector 1 gespeichert werden sollen: \n";

    for ( int i = 0; i < lenght; ++i)
    {
        std::cin >> vector1[i];
    }

    std::cout << "Bitte geben Sie die Werte an, die im Vector 2 gespeichert werden sollen: \n";

    for ( int i = 0; i < lenght; ++i)
    {
        std::cin >> vector2[i];
    }

    // Addition Vektor1 + Vektor2
    for ( int i = 0; i < lenght; ++i)
    {
        std::cout << "v1[i] + v2[i] = " << vector1[i] + vector2[i] << std::endl;
    }


    return 0;
}
