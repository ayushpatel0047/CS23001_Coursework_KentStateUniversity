#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
// Test default constructor for the String class
int main () {
    // Setup

    // Test 
    String s;  // Initializes an empty string with null-termination

    // Verify
    assert(s == "");  // The string should be empty

    std::cout << "Done testing default constructor." << std::endl;
    return 0;
}