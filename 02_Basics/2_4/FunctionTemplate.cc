#include <cstdint> //OK
#include <iostream>

/**
 * @brief Computes max of a and b
 *
 * @tparam T Should be int or double only!
 * @param a
 * @param b
 * @return
 */

 // Schablone für den Compiler (Er schaut welcher Datentyp vorhanden ist)
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    double da = 1.0;
    double db = 3.0;
    std::cout << max(da, db) << '\n'; // Hier nimmt er Schablone mit T = double

    int ia = 1;
    int ib = 3;
    std::cout << max(ia, ib) << '\n'; // Hier nimmt er Schablone mit T = int

    char ca = 'a';
    char cb = 'b';
    std::cout << max(ca, cb) << '\n';

    return 0;
}
