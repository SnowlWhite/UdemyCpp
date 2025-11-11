#include <iostream> //OK

// &:  Speicheradresse
// *p: Wert anzeigen

int main()
{

    int number = 5;
    std::cout << "Wert number: " << number << std::endl;
    std::cout << "Adresse number: " << &number << std::endl; //1c

    int *p = &number;
    std::cout << "Wert p: " << p << std::endl; //1c
    std::cout << "Wert auf den p zeigt: " << *p << std::endl;

    return 0;
}
