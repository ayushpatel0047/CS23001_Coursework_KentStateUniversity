#ifndef OBJECT_CONSTRUCTION_HPP
#define OBJECT_CONSTRUCTION_HPP

#include <iostream>

class Car {
public:
    Car();                        // Default constructor
    Car(const Car&);              // Copy constructor
    Car& operator=(const Car&);   // Assignment operator
    ~Car();                       // Destructor
};

#endif
