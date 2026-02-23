#include "bigint.hpp"
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    Bigint a(12345);
    Bigint b("12345");
    Bigint c(67890);

    // Bigint == Bigint
    assert(a == b);
    assert(!(a == c));

    // Bigint == int
    assert(a == 12345);
    assert(!(a == 67890));

    // int == Bigint
    assert(12345 == a);
    assert(!(67890 == a));

    // Bigint == const char[]
    assert(a == "12345");
    assert(!(a == "67890"));

    // const char[] == Bigint
    assert("12345" == a);
    assert(!("67890" == a));

    // operator+ test
    Bigint sum = a + c; 
    cout << "Sum of a + c: " << sum << endl;

    cout << "All tests passed!" << endl;
    return 0;
}
