#include <cstdint>
#include <iostream>

int main()
{
    char LEFT = 'a';
    char RIGHT = 'd';

    char input;
    std::cin >> input;

    if (input == LEFT)
    {
        std::cout << "Schritt nach links!\n";
    }
    else if (input == RIGHT)
    {
        std::cout << "Schritt nach rechts!\n";
    }
    else
    {
        std::cout << "Die Eingabe ist nicht erlaubt!\n";
    }

    return 0;
}
