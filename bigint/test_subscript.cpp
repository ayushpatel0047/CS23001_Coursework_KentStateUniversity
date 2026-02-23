#include <iostream>
#include <cassert>
#include "bigint.hpp"

int main() {

    { // Setup fixture
        Bigint left(0);
        Bigint right(0);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }

    { // Setup fixture
        Bigint left(1);
        Bigint right(0);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 1);
        assert(right == 0);
        assert(result == 1);
    }

    { // Setup fixture
        Bigint left(1);
        Bigint right(1);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 1);
        assert(right == 1);
        assert(result == 2);
    }

    { // Setup fixture
        Bigint left(123);
        Bigint right(877);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 123);
        assert(right == 877);
        assert(result == 1000);
    }

    { // Setup fixture
        Bigint left(999);
        Bigint right(999);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 999);
        assert(right == 999);
        assert(result == 1998);
    }

    { // Setup fixture
        Bigint left(100000);
        Bigint right(200000);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 100000);
        assert(right == 200000);
        assert(result == 300000);
    }

    { // Setup fixture
        Bigint left(987654321);
        Bigint right(123456789);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 987654321);
        assert(right == 123456789);
        assert(result == 1111111110);
    }

    { // Setup fixture
        Bigint left("123456789012345678901234567890");
        Bigint right("987654321098765432109876543210");
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(result == Bigint("1111111110111111111011111111100"));
    }

    { // Setup fixture
        Bigint left(0);
        Bigint right(12345);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(result == 12345);
    }

    { // Setup fixture
        Bigint left(555);
        Bigint right(1);
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(result == 556);
    }

    { // Setup fixture
        Bigint left("314159265358979323846264338327950288419716939937510");
        Bigint right("271828182845904523536028747135266249775724709369995");
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(result == Bigint("585987448204883847382293085463216538195441649307505"));
    }

    { // Setup fixture
        Bigint left("1234567890123456789012345678901234567890");
        Bigint right("9876543210987654321098765432109876543210");
        Bigint result;

        // Test
        result = left + right;

        // Verify
        assert(result == Bigint("11111111101111111110111111111011111111100"));
    }

    std::cout << "All addition tests passed!" << std::endl;
    return 0;
}
