#include <iostream> //OK

int main()
{
    int a = 12;
    auto b = static_cast<float>(a); // auto wird automatisch durch float ersetzt

    auto c = 12.3F;
    auto d = static_cast<float>(c);

    return 0;
}
