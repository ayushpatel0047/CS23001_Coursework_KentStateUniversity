#include <iostream>
#include <cassert>
#include "bigint.hpp"

int main() {
    //------------------------------------------------------
    // TESTS FOR timesDigit()

    // 1. 0 * 0 = 0
    {
        Bigint bi(0);
        Bigint result = bi.timesDigit(0);
        assert(result == 0);
    }

    // 2. 0 * n1 (n1 != 0) = 0
    {
        Bigint bi(0);
        Bigint result = bi.timesDigit(7); // any non-zero digit
        assert(result == 0);
    }

    // 3. 1 * n1 (n1 != 0) = n1
    {
        Bigint bi(1);
        Bigint result = bi.timesDigit(9); // any non-zero digit
        assert(result == 9);
    }

    //------------------------------------------------------
    // TESTS FOR times10()

    // 1. 0.times10(0) == 0
    {
        Bigint bi(0);
        Bigint result = bi.times10(0);
        assert(result == 0);
    }

    // 2. 0.times10(n1) == 0, where n1 != 0
    {
        Bigint bi(0);
        Bigint result = bi.times10(5);
        assert(result == 0);
    }

    //------------------------------------------------------
    // EXISTING times10 TESTS (your original ones)

    {
        //------------------------------------------------------
        // Setup fixture
        Bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);
    }

    //------------------------------------------------------
    // 1. Multiply by 0 (should stay the same)
    Bigint bi1(12345);
    Bigint res1 = bi1.times10(0);
    assert(res1 == 12345);

    //------------------------------------------------------
    // 2. Multiply small number by 1 zero
    Bigint bi2(7);
    Bigint res2 = bi2.times10(1);
    assert(res2 == 70);

    //------------------------------------------------------
    // 3. Multiply small number by 5 zeros
    Bigint bi3(9);
    Bigint res3 = bi3.times10(5);
    assert(res3 == 900000);

    //------------------------------------------------------
    // 4. Multiply a medium number by 3 zeros
    Bigint bi4(123);
    Bigint res4 = bi4.times10(3);
    assert(res4 == 123000);

    //------------------------------------------------------
    // 5. Multiply a long number by 2 zeros
    Bigint bi5("12345678901234567890");
    Bigint res5 = bi5.times10(2);
    assert(res5 == "1234567890123456789000");

    //------------------------------------------------------
    // 6. Multiply a very long number by 5 zeros
    Bigint bi6("987654321098765432109876543210");
    Bigint res6 = bi6.times10(5);
    assert(res6 == "98765432109876543210987654321000000");

    //------------------------------------------------------
    // 7. Multiply a number with trailing zeros by 4 zeros
    Bigint bi7("1000000000");
    Bigint res7 = bi7.times10(4);
    assert(res7 == "10000000000000");

    //------------------------------------------------------
    // 8. Multiply 1 by 10 zeros
    Bigint bi8(1);
    Bigint res8 = bi8.times10(10);
    assert(res8 == "10000000000");

    //------------------------------------------------------
    // 9. Multiply 0 by any number of zeros
    Bigint bi9(0);
    Bigint res9 = bi9.times10(15);
    assert(res9 == 0);

    //------------------------------------------------------
    // 10. Multiply long number by 1 zero
    Bigint bi10("123456789012345678901234567890");
    Bigint res10 = bi10.times10(1);
    assert(res10 == "1234567890123456789012345678900");

    //------------------------------------------------------
    // 11. Multiply number with repeated digits by 6 zeros
    Bigint bi11("1111111111");
    Bigint res11 = bi11.times10(6);
    assert(res11 == "1111111111000000");

    //------------------------------------------------------
    // 12. Multiply very long number by 0
    Bigint bi12("9876543210987654321098765432109876543210");
    Bigint res12 = bi12.times10(0);
    assert(res12 == "9876543210987654321098765432109876543210");

    //------------------------------------------------------
    // 13. Multiply max digits number by 1 zero
    Bigint bi13("999999999999999999999999999999999999999999");
    Bigint res13 = bi13.times10(1);
    assert(res13 == "9999999999999999999999999999999999999999990");

    //------------------------------------------------------
    // 14. Multiply single digit 5 by 7 zeros
    Bigint bi14(5);
    Bigint res14 = bi14.times10(7);
    assert(res14 == 50000000);

    //------------------------------------------------------
    // 15. Multiply long number with mix of digits by 8 zeros
    Bigint bi15("123456789012345678901234567890");
    Bigint res15 = bi15.times10(8);
    assert(res15 == "12345678901234567890123456789000000000");

    std::cout << "Done testing timesDigit and times10" << std::endl;
    return 0;
}
