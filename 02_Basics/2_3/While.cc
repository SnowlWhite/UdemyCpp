#include <cstdint> //OK
#include <iostream>

int main()
{
    int sum = 0;
    int input = 0;

    while (sum < 10) // Es ist vorher nicht bekannt wie oft die Schleife durchlaufen wird
    {
        std::cout << "Die Summe beträgt aktuell: " << sum << ". Trage den nächsten Wert ein: ";
        std::cin >> input;
        sum = sum + input;

    }

    std::cout << "Der maximale Summenwert wurde erreicht!";

    return 0;
}
