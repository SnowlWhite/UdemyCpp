#include <iostream> // OK

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.
// The variable a should be a double

int main()
{
    // Konsoleneingabe
    double length_square = 0.0; // Anfangswert mit 0 initialisieren!
    std::cout << "Bitte geben Sie die Länge des Quadrats im cm an: ";
    std::cin >> length_square;
    std::cout << "\n";

    // Rechnungen
    std::cout << "Umfang: " << 4 * length_square << " cm" << std::endl;
    std::cout << "Flächeninhalt: " << 2 * length_square << " cm2" << std::endl;


    return 0;
}
