#include <cstdint> //OK
#include <iostream>

int main()
{
    int sum = 10;

    do // Schleife wird erst ausgeführt
    {
        std::cout << "\nCurrent Sum: " << sum << " Enter the next value: ";
        int input = 0;
        std::cin >> input;

        sum += input;
    } while (sum < 10); // Überprüfung findet erst am Ende statt, ob ein erneuter Durchlauf stattfindet

    return 0;
}
