#include <cstdint> //OK
#include <iostream>

// Vorteile:
// Durch den Zusatz 'const' ist die Variable nicht mehr verändertbar nachdem sie angelegt wurde (zur Compiletime)
// Compiler kann den Code optimieren
int func(const int val)
{
    const int temp = val * 2; // read only

    return temp / 3;
}

int main()
{
    int v = 2; // read & write
    std::cout << func(v) << '\n';

    return 0;
}
