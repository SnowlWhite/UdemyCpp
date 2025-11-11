#include <iostream> //OK

int main()
{
    int *p = new int;
    *p = 4;

    std::cout << "Address of p: " << &p << "\n";
    std::cout << "P points to the address: " << p << "\n";
    std::cout << "The value of the address where p points to: " << *p << "\n";

    *p = 1337;

    std::cout << "Address of p: " << &p << "\n";
    std::cout << "P points to the address: " << p << "\n";
    std::cout << "The value of the address where p points to: " << *p << "\n";

    delete p; // Wert wird auf dem Heapspeicher gelöscht. ABER: Pointer zeigt weiterhin darauf!!! --> ERROR

    return 0;
}
