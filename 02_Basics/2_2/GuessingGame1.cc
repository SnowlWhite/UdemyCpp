#include <cstdint> //OK
#include <iostream>

int main()
{
    // bool: true/false
    // [0, 10]

    int number = 0;

    std::cout << "Bitte rate eine Zahl zwischen 0 und 10: \n";
    std::cin >> number;

    if (number >=0 && number <= 10) // TRUE-Zweig
    {
        if (number == 4)
        {
            std::cout << "You WON!!!!\n";
        }
        else
        {
            std::cout << "You lost :(\n";
        }
    }
    else // FALSE-Zweig
    {
        std::cout << "Es sind nur Zahlen von 0 bis 10 möglich!\nBitte korrigiere die Eingabe.\n";
    }

    return 0;
}
