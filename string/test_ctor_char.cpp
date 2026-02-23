#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('0');

        // VERIFY
        assert(str == "0");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('A');

        // VERIFY
        assert(str == "A");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('z');

        // VERIFY
        assert(str == "z");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('!');

        // VERIFY
        assert(str == "!");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('@');

        // VERIFY
        assert(str == "@");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('#');

        // VERIFY
        assert(str == "#");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('1');

        // VERIFY
        assert(str == "1");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str(' ');  

        // VERIFY
        assert(str == " ");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('$');

        // VERIFY
        assert(str == "$");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('%');

        // VERIFY
        assert(str == "%");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('&');

        // VERIFY
        assert(str == "&");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('X');

        // VERIFY
        assert(str == "X");
    }

    std::cout << "Done testing single character constructor." << std::endl;
    return 0;
}