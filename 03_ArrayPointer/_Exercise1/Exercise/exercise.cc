#include <array>
#include <cstddef>
#include <cstdint>

#include "exercise.h"

//                     |----- Datentyp ------| |Name|
double array_sum(const std::array<double, 100> array)
{
    double sum = 0.0;

    for (std::size_t i = 0; i < array.size(); i++)
    {
        sum = sum + array[i];
    }

    return sum;
}
