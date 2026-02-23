#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str;

    // TEST
    std::cin >> str;  // simulate input (or set a string directly)

    // VERIFY
    // Example: if input is "Hello", then
    // assert(str == "Hello");

    std::cout << "Done testing input.\n";
    return 0;
}
