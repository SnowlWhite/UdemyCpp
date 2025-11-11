#include <cstdint> //OK
#include <iostream>

// Funktion: Usereingabe
int user_input() // Funktion erwartet keinen Wert, da der User ihn über die Konsole erfassen soll
{
    int input_number = 0;
    std::cout << "Please enter a number: ";
    std::cin >> input_number;

    return input_number;
}

// Funktion: Ist Zahl gerade?
bool is_even(int even_number) // Funktion erwartet einen Integer, der mitgegeben wird!
{
    if(even_number % 2 == 0) //Returntyp ist ein Bool
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int user_number = user_input();
    std::cout << user_number << '\n';

    bool result = is_even(user_number);
    std::cout << "Ist die Zahl gerade? " << std::boolalpha << result << "\n";

    return 0;
}
