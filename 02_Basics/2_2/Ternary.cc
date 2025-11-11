#include <iostream> //OK

int main()
{
    int age1 = 28;
    int age2 = 56;

    // IF-Anweisung
    int older_age = 0;
    if (age1 > age2)
    {
        older_age = age1;
    }
    else
    {
        older_age = age2;
    }

    // Bedingungsoperator (Ternary Operator)
    int older_age2 = 0;
    //            Bedingung  ? TRUE : FALSE;
    older_age2 = age1 > age2 ? age1 : age2;

    return 0;
}
