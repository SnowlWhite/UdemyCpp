#include <cstdint> //OK
#include <iostream>

// Static hat je nach Kontext in C++ verschiedene Bedeutungen.
// Hier: im Bereich lokale Variablen innerhalb einer Funktion!
// Im Bereich globale Variablen hat static eine andere Bedeutung
// Static wird während der Compiletime gespeichert und zur Runtime nicht nochmal ausgeführt.
// Die Zeile wird dann übersprungen.

int func(const int val)
{
    static int counter = 0; // Wert der Variable wird bei der Kompilierung in den Static-Speicher geschrieben und liegt zur Laufzeit schon vor

    const int temp = val * 2; // Lokale Variable 'temp' wird erstellt

    ++counter; // Diese Erhöhung der Variable bleibt über den Funktionsaufruf bestehen, weil sie static ist
    std::cout << "Counter: " << counter << "\n";

    return temp / 3; // Lokale Variable 'temp' wird zerstört
}

int main()
{
    std::cout << func(1) << '\n';
    std::cout << func(2) << '\n';
    std::cout << func(3) << '\n';

    return 0;
}
