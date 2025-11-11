#include <cstdint> //OK
#include <iostream>

// Defines
// Es gibt kein = bei der Wertezuweisung!
// Capslog zeigt, dass es ein konstanter Wert ist der nicht verändert werden kann
// Der Prozessor ersetzt NUM_PLAYERS im Code durch 2
#define NUM_PLAYERS 2
#define MODE_1

int main()
{
// Über Defines kann man Codeteile aktivieren und deaktivieren
#ifdef MODE_1 //Mit Defines muss man in Pre-Processor-Sprache arbeiten
    std::cout << "Num Players: " << NUM_PLAYERS << std::endl;
#else
    std::uint32_t num_players = 2;
    std::cout << "Num Players: " << num_players << std::endl;
#endif

    return 0;
}
