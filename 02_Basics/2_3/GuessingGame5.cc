#include <cstdint> //OK
#include <iostream>

int main()
{
    int number = 0;
    bool has_won = false;

    std::cout << "Willkommen im Spiel!!!" << std::endl;

    do
    {
        std::cout << "Please enter your guess: ";
        std::cin >> number;

        if ((number >= 0) && (number <= 10))
        {
            if (number == 4)
            {
                std::cout << "Gewonnen! Das Spiel ist beendet." << std::endl;
                has_won = true;
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

    } while(!has_won);

    return 0;
}
