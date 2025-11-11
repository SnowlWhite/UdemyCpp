#include <cstdint> //OK
#include <iostream>

int main()
{
    int number = 0;
    int max_durchlauf = 3; // User hat 3 Versuche richtig zu raten

    std::cout << "Willkommen im Spiel!!!" << std::endl;
    std::cout << "Rate eine Zahl zwischen 0 und 10. Du hast 3 Versuche." << std::endl;

    for( int rateversuche = 0; rateversuche < max_durchlauf; rateversuche++) // Maximale Durchläufe
    {

            std::cout << "Please enter your guess: ";
            std::cin >> number;

            if ((number >= 0) && (number <= 10))
            {
                if (number == 4)
                {
                    std::cout << "You won!" << std::endl;
                }
                else if (number == 2)
                {
                    std::cout << "You won wooden spoon!" << std::endl;
                }
                else
                {
                    std::cout << "You lost!" << std::endl;
                }
            }
            else
            {
                std::cout << "You entered an invalid number!" << std::endl;
            }

    }

    return 0;
}
