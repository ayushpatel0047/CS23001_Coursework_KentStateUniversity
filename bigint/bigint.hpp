#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

const int CAPACITY = 300; // adjust as needed

class Bigint {
public:
    // Constructors
    Bigint();                       // Default constructor
    Bigint(int value);              // Construct from int
    Bigint(const char value[]);     // Construct from const char[]

    // Operators
    bool operator==(const Bigint& other) const;
    bool operator==(int value) const;
    bool operator==(const char value[]) const;
    Bigint operator+(const Bigint& other) const;
    Bigint operator*(const Bigint& other) const;   // Milestone 3 multiply
    int operator[](int i) const;

    // Milestone 3 methods
    Bigint timesDigit(int d) const;   // Multiply by single digit 0-9
    Bigint times10(int n) const;      // Multiply by 10^n

    // Debug
    void debugPrint(std::ostream& out) const;

    // Friend stream operators
    friend std::ostream& operator<<(std::ostream& out, const Bigint& b);
    friend std::istream& operator>>(std::istream& in, Bigint& b);

private:
    int num[CAPACITY]; // Least significant digit at index 0
};

// Free function overloads for reverse comparisons
bool operator==(int lhs, const Bigint& rhs);
bool operator==(const char lhs[], const Bigint& rhs);

#endif
