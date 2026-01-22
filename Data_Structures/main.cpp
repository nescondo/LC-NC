//
// Created by Nikolai Escondo on 1/22/26.
//
#include "vector.h"
#include <iostream>

int main()
{

    std::cout << "vector arr(5);" << std::endl;
    vector arr(5);
    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Capacity: " << arr.getCapacity() << std::endl;
    std::cout << "\n";

    std::cout << "arr.push_back(1);" << std::endl;
    arr.push_back(1);
    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Capacity: " << arr.getCapacity() << std::endl;
    std::cout << "\n";

    std::cout << "arr.push_back(3);" << std::endl;
    std::cout << "arr.push_back(99);" << std::endl;
    arr.push_back(3);
    arr.push_back(99);
    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Capacity: " << arr.getCapacity() << std::endl;
    std::cout << "\n";

    std::cout << "arr.pop_back();" << std::endl;
    arr.pop_back();
    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Capacity: " << arr.getCapacity() << std::endl;
    std::cout << "\n";

    std::cout << "arr.get(2); = " << arr.get(2) << std::endl;
    std::cout << "arr.set(0, 105);" << std::endl;
    arr.set(0, 105);
    std::cout << "arr.get(0); = " << arr.get(0) << std::endl;
    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Capacity: " << arr.getCapacity() << std::endl;

}