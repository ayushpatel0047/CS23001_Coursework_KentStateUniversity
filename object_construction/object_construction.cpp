#include "object_construction.hpp"

Car::Car() {
    std::cout << "Called Default Constructor" << std::endl;
}

Car::Car(const Car&) {
    std::cout << "Called Copy Constructor" << std::endl;
}

Car& Car::operator=(const Car&) {
    std::cout << "Called Assignment Operator" << std::endl;
    return *this;
}

Car::~Car() {
    std::cout << "Called Destructor" << std::endl;
}
