#include "object_construction.hpp"
#include <iostream>

int main() {
    Car car1;       // Default Constructor
    Car car2 = car1; // Copy Constructor
    Car car3;       
    car3 = car1;    // Assignment Operator
    return 0;       // Destructors called automatically
}
