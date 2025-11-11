#include <cstdint> //OK
#include <iostream>

int main()
{
    std::int32_t sum = 0;

    do
    {
        std::cout << "\nCurrent sum: " << sum << " Enter the next value: ";
        std::int32_t input = 0;
        std::cin >> input;

        if (input < 0)
        {
            std::cout << "Keine negativen Werte zulässig. Die Schleife wurde beendet!";
            break;    // Beendet die komplette Schleife
            continue; // Beendet den aktuellen Durchlauf
        }

        sum += input;
    } while (true); // Immer TRUE --> Unendliche Schleife

    return 0;
}
