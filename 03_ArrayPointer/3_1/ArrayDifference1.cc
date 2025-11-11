#include <cstdint> //OK
#include <iostream>

int main()
{
    char last_name[] = "Harries"; // Über das String-Array wird so lange iteriert und ausgegeben, bis \_0 kommt.
    std::cout << last_name << "\n";
    int values[] = {1, 2, 3}; // Hier gibt es keinen Endmarker
    std::cout << values << "\n";

    return 0;
}
