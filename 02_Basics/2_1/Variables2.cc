#include <iostream> //OK

int main(){

    float my_value1 = 10.0;
    float my_value2 = 5.0;

    float result_addition = my_value1 + my_value2; // Ergebnis der Rechnung wird abgespeichert
    std::cout << "Addition: " << result_addition << std::endl;

    float result_substraction = my_value1 + my_value2;
    std::cout << "Substraction: " << result_substraction << std::endl;

    float result_multiplication = my_value1 * my_value2;
    std::cout << "Multiplication: " << result_multiplication << std::endl;

    float result_division = my_value1 / my_value2;
    std::cout << "Division: " << result_division << std::endl;

    return 0;
}
