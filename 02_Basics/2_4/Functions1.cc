#include <cstdint> //OK
#include <iostream>

//Funktion --> Eine Aufgabe pro Funktion
// Returntyp Funktionsname (Parameterliste)
int kleineFunktion()
{
    int number = 0;
    std::cout << "Bitte gib eine Nummer ein: " << std::endl;
    std::cin >> number;

    //Rückgabewert
    return number;
}

int main()
{

    int n1 = kleineFunktion();
    int n2 = kleineFunktion();
    int n3 = kleineFunktion();
    std::cout << "Du hast " << n1 << ", " << n2 << " und " << n3 << " eingegeben.\n";


    return 0;
}
