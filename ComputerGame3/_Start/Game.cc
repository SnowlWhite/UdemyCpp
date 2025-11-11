#include <cstdint>
#include <iostream>

#include "Game.h"

void game()
{

    int player = START;
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
}
