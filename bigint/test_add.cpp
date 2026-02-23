#include <iostream>
#include <cassert>
#include "bigint.hpp"

int main() {

    {
        Bigint left(2);
        Bigint right(3);
        Bigint result;

        result = left + right;

        assert(left == 2);
        assert(right == 3);
        assert(result == 5);
    }

    {
        Bigint left(200000);
        Bigint right(300000);
        Bigint result;

        result = left + right;

        assert(result == 500000);
    }

    {
        Bigint left(555);
        Bigint right(1);
        Bigint result;

        result = left + right;

        assert(result == 556);
    }

    {
        Bigint left("24567890");
        Bigint right("98765");
        Bigint result;

        result = left + right;

        assert(result == Bigint("24666655"));
    }

    {
        Bigint left(24);
        Bigint right(89);
        Bigint result;

        result = left + right;

        assert(result == 113);
    }

    {
        Bigint left("123456789012345678901234567890");
        Bigint right("987654321098765432109876543210");
        Bigint result;

        result = left + right;

        assert(result == Bigint("1111111110111111111011111111100"));
    }

    {
        Bigint left("999999999999999999999999999999");
        Bigint right(1);
        Bigint result;

        result = left + right;

        assert(result == Bigint("1000000000000000000000000000000"));
    }

    {
        Bigint left("314159265358979323846264338327950288419716939");
        Bigint right("271828182845904523536028747135266249775724709");
        Bigint result;

        result = left + right;

        assert(result == Bigint("585987448204883847382293085463216538195441648"));
    }


    {
        Bigint left(0);
        Bigint right(0);

        Bigint result = left + right;

        assert(result == 0);
    }

    {
        Bigint left(0);
        Bigint right(12345);

        Bigint result = left + right;

        assert(result == 12345);
    }

    {
        Bigint left(12345);
        Bigint right(0);

        Bigint result = left + right;

        assert(result == 12345);
    }

    {
        Bigint left("999999999");
        Bigint right("1");

        Bigint result = left + right;

        assert(result == Bigint("1000000000"));
    }

    {
        Bigint left("5000000000000000000000");
        Bigint right("5000000000000000000000");

        Bigint result = left + right;

        assert(result == Bigint("10000000000000000000000"));
    }

    {
        Bigint left("123456789");
        Bigint right("987654321");

        Bigint result = left + right;

        assert(result == Bigint("1111111110"));
    }

    {
        Bigint left("18446744073709551615");
        Bigint right("1");

        Bigint result = left + right;

        assert(result == Bigint("18446744073709551616"));
    }

    {
        Bigint left("111111111111111111111");
        Bigint right("222222222222222222222");

        Bigint result = left + right;

        assert(result == Bigint("333333333333333333333"));
    }

    {
        Bigint left("13579");
        Bigint right("24680");

        Bigint result = left + right;

        assert(result == Bigint("38259"));
    }

    {
        Bigint left("1000000000000000000000000");
        Bigint right("999999999999999999999999");

        Bigint result = left + right;
        
        assert(result == Bigint("1999999999999999999999999"));
    }

    {
        Bigint left("1");
        Bigint right("9999999999999999999999999999999999999999999");

        Bigint result = left + right;

        assert(result == Bigint("10000000000000000000000000000000000000000000"));
    }

    {
        Bigint left("3333333333333333333333333");
        Bigint right("6666666666666666666666667");

        Bigint result = left + right;

        assert(result == Bigint("10000000000000000000000000"));
    }

    {
        Bigint left("12345678901234567890");
        Bigint right("12345678901234567890");

        Bigint result = left + right;

        assert(result == Bigint("24691357802469135780"));
    }

    {
        Bigint left("987654321987654321987654321");
        Bigint right("987654321987654321987654321");

        Bigint result = left + right;

        assert(result == Bigint("1975308643975308643975308642"));
    }

    {
        Bigint left("0");
        Bigint right("999999999999999999999999999999");

        Bigint result = left + right;

        assert(result == Bigint("999999999999999999999999999999"));
    }

    {
        Bigint left("55555555555555555555");
        Bigint right("44444444444444444445");

        Bigint result = left + right;

        assert(result == Bigint("100000000000000000000"));
    }

    {
        Bigint left("700000000000000000000");
        Bigint right("300000000000000000000");

        Bigint result = left + right;

        assert(result == Bigint("1000000000000000000000"));
    }

    

    std::cout << "All addition tests passed!" << std::endl;
    return 0;
}
