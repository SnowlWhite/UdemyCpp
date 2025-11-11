#include <cstdint> //OK
#include <iostream>

double max(double a, double b)
{
    return a > b ? a : b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    double da = 1.0;
    double db = 3.0;
    std::cout << max(da, db) << '\n'; // Compiler entscheidet anhand der Parameter, welche max() er aufruft

    int ia = 1;
    int ib = 3;
    std::cout << max(ia, ib) << '\n';

    return 0;
}
