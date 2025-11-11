#include <cstdint> //OK
#include <iostream>

// dataType varName[numElements];

int main()
{

    //                0   1   2   3   4
    int array1[5] = {10, 11, 12, 13, 14};

    int array2[] = {10, 11, 12};

    int array3[3];
    array3[0] = 10; // write
    array3[1] = 11;
    array3[2] = 12;

    std::cout << array1[1] << "\n"; // read

    return 0;
}
