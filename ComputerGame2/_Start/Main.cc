#include <cstdint> //OK
#include <iostream>

int main()
{
    int lenght_gameboard = 10;
    int START = 0;
    int GOAL = 9;
    int player = START;

    char LEFT = 'a';
    char RIGHT = 'd';

    char move;

    while(true) // Unendlicher Durchlauf
    {
        // Abbruchbedingung wenn Spieler Ziel erreicht


        // Spielfeld ausgeben
        for(int i = START; i < lenght_gameboard; i++)
        {
            if( i == player )
            {
                if (player == GOAL)
                {
                    std::cout << "Z";
                }
                else
                {
                    std::cout << "P";
                }
            }
            else if( i == START || i == GOAL )
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }

        if(player == GOAL)
        {
            std::cout << "  GEWONNEN! Du hast das Ziel erreicht.\n";
            break;
        }

        // Benutzereingabe
        std::cin >> move;

        // Bewegung des Spielers zählen
        if (LEFT == move)
        {
            if(player > 0)
            {
                player--;
            }
            else
            {
                std::cout << "Unrecognized move!\n";
                continue;
            }

        }
        else if (RIGHT == move)
        {
            player++;
        }
        else
        {
            std::cout << "Unrecognized move!\n";
        }
    }

    return 0;
}
