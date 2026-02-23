#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    String a("abc");
    String b("abd");

    assert(a < b);
    assert(!(b < a));

    std::cout << "All less-than tests passed.\n";
    return 0;
}
