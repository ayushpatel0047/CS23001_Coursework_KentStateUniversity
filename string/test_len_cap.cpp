#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("");

        // TEST
        int len = str.length();
        int cap = str.capacity();

        // VERIFY
        assert(str == "");
        assert(len == 0);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("X");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "X");
        assert(len == 1);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("AB");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "AB");
        assert(len == 2);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("QWERTY");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "QWERTY");
        assert(len == 6);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("ASDFGHJKL");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "ASDFGHJKL");
        assert(len == 9);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("ZXCVBNM123");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "ZXCVBNM123");
        assert(len == 10);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("POIUYTREWQ");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "POIUYTREWQ");
        assert(len == 10);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("LKJHGFDSAMNBVCXZ");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "LKJHGFDSAMNBVCXZ");
        assert(len == 16);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("QAZWSXEDCRFV");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "QAZWSXEDCRFV");
        assert(len == 12);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("TGBNHYUJMIKOLP");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "TGBNHYUJMIKOLP");
        assert(len == 14);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("1234567890ABCDEFGHIJ");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "1234567890ABCDEFGHIJ");
        assert(len == 20);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("QW1E2R3T4Y5U6I7O8");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "QW1E2R3T4Y5U6I7O8");
        assert(len == 17);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("ZX9CV8BN7M6LK5J4H3G2F1");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "ZX9CV8BN7M6LK5J4H3G2F1");
        assert(len == 22);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("PLMNOKIJBUHVYGTCRFXDESWQ");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "PLMNOKIJBUHVYGTCRFXDESWQ");
        assert(len == 24);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("1Q2W3E4R5T6Y7U8I9O0P");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "1Q2W3E4R5T6Y7U8I9O0P");
        assert(len == 20);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("A1S2D3F4G5H6J7K8L9Z0X");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "A1S2D3F4G5H6J7K8L9Z0X");
        assert(len == 21);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("MN1B2VC3XZ4LK5J6H7GF8");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "MN1B2VC3XZ4LK5J6H7GF8");
        assert(len == 21);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("QAZ1WSX2EDC3RFV4TGB5YHN");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "QAZ1WSX2EDC3RFV4TGB5YHN");
        assert(len == 23);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("PLM9OK8IJ7UB6HV5YG4TC3RF2X1D");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "PLM9OK8IJ7UB6HV5YG4TC3RF2X1D");
        assert(len == 28);
        assert(cap >= len);
    }

    {
        //------------------------------------------------------
        String str("ZXCVBNMASDFGHJKLQWERTYUIOP1234567890");

        int len = str.length();
        int cap = str.capacity();

        assert(str == "ZXCVBNMASDFGHJKLQWERTYUIOP1234567890");
        assert(len == 36);
        assert(cap >= len);
    }

    std::cout << "Done testing length and capacity with random strings." << std::endl;
    return 0;
}
