#include <cstdint>
#include <iostream> // OK

#include "exercise.h"

int main()
{
    // Längenvariable für Array erstellen
    constexpr auto array_length = std::size_t{100};

    // Standard-Array anlegen
    std::array<double, 100> array2;

    // Befüllen von 0 bis 99
    for (std::size_t i = 0; i < array_length; i++)
    {
        array2[i] = static_cast<double>(i);
    }

    const auto sum2 = array_sum(array2);
    std::cout << "(Exercise 3) Array Sum = " << sum2 << '\n';

    return 0;
}
