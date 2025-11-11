#include <cstdint>  //Erledigt
#include <iostream>

void super_duper_example(const int number)
{
    //Zähler soll über Funktionsaufruf erhalten bleiben
    static int counter_even = 0;
    constexpr int counter_max = 10;

    // Wenn gerade Zahl, wird Zähler erhöht
    if( number % 2 == 0 )
    {
        counter_even++;
        std::cout << "Zähler erhöht auf: " << counter_even << "\n";
    }

    if (counter_even == counter_max )
    {
        counter_even = 0;
    }
}

int main()
{
    for(int i= 0; i < 20; i++)
    {
        super_duper_example(i);
    }


    return 0;
}
