#include <cstdint> // OK
#include <iostream>

// Über eine Tabelle laufen
int main()
{
    // Äußere Iteration
    for (std::uint32_t i = 0; i < 2; i++) // Über die Spalten laufen
    {
        // Innere Iteration
        for (std::uint32_t j = 0; j < 4; j++) // Über die Zeilen laufen
        {
            std::cout << i * j << std::endl;
        }
    }

    return 0;
}
