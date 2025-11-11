#include <iostream> //OK

//C++: static_cast<newDtype>(varName)


int main()
{
    int a = 12;
    float b = static_cast<float>(a); // int wird in fload gecastet

    double c = 12.3;
    float d = static_cast<float>(c);

    return 0;
}
