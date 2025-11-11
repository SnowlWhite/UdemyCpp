#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{

    for( int i = 0; i < I; i++ )
    {
        for( int j = 0; j < J; j++ )
        {
            bool result_even = ((i + j) % 2) == 0;
            if(result_even == true)
            {
                std::cout << "i: " << i << ", " << "j: " << j << " := " << "Gerade" << "\n";
            }
            else
            {
                std::cout << "i: " << i << ", " << "j: " << j << " := " << "Ungerade" << "\n";
            }



        }
    }

}
