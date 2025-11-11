#include <array>  // OK
#include <cstdint>
#include <iostream>

// Array soll ausgegeben werden
// Template: Funktion allgemeingültig --> Länge N
template <std::size_t N>
void print_array(const std::array<std::size_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << "\n";
    }
}

int main()
{

    // Standard-Array anlegen
    std::array<std::size_t, 4> array1 = {1, 2, 3, 4};
    std::array<std::size_t, 6> array2 = {1, 2, 3, 4, 5, 6};

    // Funktionsaufruf
    print_array(array1);
    print_array(array2);

    return 0;
}
