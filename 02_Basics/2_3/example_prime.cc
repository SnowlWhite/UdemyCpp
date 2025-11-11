#include <cstdint> //OK
#include <iostream>

// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result
// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{

    bool is_prime = true;
    int prime_number = 0;

    std::cout << "Bitte Nummer zur Überprüfung eingeben: \n";
    std::cin >> prime_number;

    // 0 und 1 sind keine Primzahlen
    if (prime_number == 0 || prime_number == 1)
    {
        is_prime = false;
    }

    // Zahlen ab 2 prüfen
    for ( int i = 2; i < prime_number; i++)
    {
      if (prime_number % i == 0) // Hier kommt man nur rein, wenn es Teiler der Zahl gibt --> Keine Primzahl!
      {
        is_prime = false;
      }
    }

    if(is_prime == true)
    {
       std::cout << "Die Zahl " << prime_number << " ist eine Primzahl.\n";
    }
     else
     {
       std::cout << "Die Zahl " << prime_number << " ist KEINE Primzahl.\n";
     }

    return 0;
}
