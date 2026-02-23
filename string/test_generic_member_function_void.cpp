 //  String class test program
//
//  Tests: XXX
// 

#include "string.hpp"
#include <cassert>
#include <iostream> 
  
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        str.OP();

        // VERIFY
        assert(XXX == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        str.OP();

        // VERIFY
        assert(XXX == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        str.OP();

        // VERIFY
        assert(XXX == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        str.OP();

        // VERIFY
        assert(XXX == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        str.OP();

        // VERIFY
        assert(XXX == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        str.OP();

        // VERIFY
        assert(XXX == YYY);
    }


    // ADD ADDITIONAL TESTS AS NECESSARY

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("");

        // TEST
        str += String("abc");

        // VERIFY
        assert(str == "abc");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("x");

        // TEST
        str[0] = 'y';

        // VERIFY
        assert(str == "y");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("Hello");
        String str2("World");

        // TEST
        String result = str1 + str2;

        // VERIFY
        assert(result == "HelloWorld");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String sub = str.substr(2, 4);

        // VERIFY
        assert(sub == "cde");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("hello");

        // TEST
        int idx = str.findch(0, 'l');

        // VERIFY
        assert(idx == 2);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");
        String sub("de");

        // TEST
        int idx = str.findstr(0, sub);

        // VERIFY
        assert(idx == 3);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("abc");
        String str2("xyz");

        // TEST
        bool result = (str1 < str2);

        // VERIFY
        assert(result == true);
    }
    std::cout << "Done testing XXX." << std::endl;
    return 0;
}

