#include <cstdint>
#include <iostream>

// Compute the sum for every column

int main()
{

    const static int spalte = 2;
    const static int reihe = 3;
    int summe_spalte1[spalte] = { 0, 0 };
    int summe_spalte2[spalte] = { 0, 0 };

    int my_matrix[reihe][spalte] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Spaltensumme 1
    for ( int i = 0; i < reihe; ++i ) // Wir laufen erst über die Reihen
    {
        for ( int j = 0; j < spalte; ++j )  // Dann über die Spalten
        {
            summe_spalte1[j] = summe_spalte1[j] + my_matrix[i][j];
        }
    }

    // Spaltensumme 1
    for ( int i = 0; i < reihe; ++i )
    {
        for ( int j = 1; j < spalte; ++j )
        {
            summe_spalte2[j] = summe_spalte2[j] + my_matrix[i][j];
        }
    }


    std::cout << "Die Summe der 1. Spalte ist: "<< summe_spalte1[0] << "\n";
    std::cout << "Die Summe der 2. Spalte ist: "<< summe_spalte2[1] << "\n";

    return 0;
}
