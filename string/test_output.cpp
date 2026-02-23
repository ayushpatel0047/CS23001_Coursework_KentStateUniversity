#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    {
        // SETUP FIXTURE
        String str("Hello");

        // TEST
        std::cout << str;

        // VERIFY
        assert(str == "Hello");
    }

    {
        // SETUP FIXTURE
        String str("");

        // TEST
        std::cout << str;

        // VERIFY
        assert(str == "");
    }

    {
        // SETUP FIXTURE
        String str("1234567890");

        // TEST
        std::cout << str;

        // VERIFY
        assert(str == "1234567890");
    }

    {
        // SETUP FIXTURE
        String str("A longer string with spaces and symbols!@#");

        // TEST
        std::cout << str;

        // VERIFY
        assert(str == "A longer string with spaces and symbols!@#");
    }

    {
        // SETUP FIXTURE
        String str("SingleChar");

        // TEST
        std::cout << str;

        // VERIFY
        assert(str == "SingleChar");
    }

    


    std::cout << "\nDone testing output.\n";
    return 0;
}
