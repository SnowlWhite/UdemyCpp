#include <iostream> //OK

int main()
{
    int a = 1;  // 13
    int b = 2;  // 15
    int c = 3;

    // Pointer zeigen auf Variablen
    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c;

    *p_d = (2 * (*p_e)) + (3 * (*p_f));  // Wert von a wird aktualisiert --> 13
    p_d = &b; // Zeigt nicht mehr auf a, sondern auf b
    p_f = &a; // Zeigt nicht mehr auf c, sondern auf a

    *p_e = *p_d + *p_f;  // Wert von b wird aktualisiert --> 2 + 13 = 15

    std::cout << a << '\n';     // 13
    std::cout << *p_d << '\n';  // 15
    std::cout << *p_e << '\n';  // 15
    std::cout << *p_f << '\n';  // 13

    return 0;
}
