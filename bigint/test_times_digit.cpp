// Bigint Test Program
//
// Tests:  timesDigit, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {

    //------------------------------------------------------
    // 1. Multiply single-digit numbers
    {
        Bigint bi(3);
        Bigint result = bi.timesDigit(1);
        assert(result == 3);  // 3 * 1 = 3
    }

    //------------------------------------------------------
    // 2. Multiply small numbers by a digit
    {
        Bigint bi(123);
        Bigint result = bi.timesDigit(9);
        assert(result == 1107);  // 123 * 9 = 1107
    }

    //------------------------------------------------------
    // 3. Multiply small numbers by 0
    {
        Bigint bi(4567);
        Bigint result = bi.timesDigit(0);
        assert(result == 0);  // 4567 * 0 = 0
    }

    //------------------------------------------------------
    // 4. Multiply large numbers by a single digit
    {
        Bigint bi("12345678901234567890");
        Bigint result = bi.timesDigit(5);
        assert(result == "61728394506172839450"); // 12345678901234567890 * 5
    }

    //------------------------------------------------------
    // 5. Multiply large numbers by 1 (identity)
    {
        Bigint bi("98765432109876543210");
        Bigint result = bi.timesDigit(1);
        assert(result == "98765432109876543210"); // Identity check
    }

    //------------------------------------------------------
    // 6. Multiply a number ending with zeros
    {
        Bigint bi("1000000000000000");
        Bigint result = bi.timesDigit(9);
        assert(result == "9000000000000000");
    }

    //------------------------------------------------------
    // 7. Multiply very long number by 2
    {
        Bigint bi("999999999999999999999999");
        Bigint result = bi.timesDigit(2);
        assert(result == "1999999999999999999999998");
    }

    //------------------------------------------------------
    // 8. Multiply number with alternating digits
    {
        Bigint bi("101010101010");
        Bigint result = bi.timesDigit(3);
        assert(result == "303030303030");
    }

    //------------------------------------------------------
    // 9. Multiply number by 9
    {
        Bigint bi("123456789");
        Bigint result = bi.timesDigit(9);
        assert(result == "1111111101");
    }

    //------------------------------------------------------
    // 10. Multiply very small number by 5
    {
        Bigint bi(7);
        Bigint result = bi.timesDigit(5);
        assert(result == 35);
    }

    //------------------------------------------------------
    // 11. 0.timesDigit(0) == 0
    {
        Bigint bi(0);
        Bigint result = bi.timesDigit(0);
        assert(result == 0);
    }

    //------------------------------------------------------
    // 12. 0.timesDigit(n1) == 0
    {
        Bigint bi(0);
        Bigint result = bi.timesDigit(5); 
        assert(result == 0);
    }

    //------------------------------------------------------
    // 13. 1.timesDigit(n1) == n1
    {
        Bigint bi(1);
        Bigint result = bi.timesDigit(7); 
        assert(result == 7);
    }

    std::cout << "Done testing timesDigit" << std::endl;
    return 0;
}
