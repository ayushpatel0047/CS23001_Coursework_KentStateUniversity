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
        RESULT_TYPE result = str.OP();

        // VERIFY
        assert(str    == X);
        assert(result == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        RESULT_TYPE result = str.OP();

        // VERIFY
        assert(str    == X);
        assert(result == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        RESULT_TYPE result = str.OP();

        // VERIFY
        assert(str    == X);
        assert(result == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        RESULT_TYPE result = str.OP();

        // VERIFY
        assert(str    == X);
        assert(result == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        RESULT_TYPE result = str.OP();

        // VERIFY
        assert(str    == X);
        assert(result == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str(X);

        // TEST
        RESULT_TYPE result = str.OP();

        // VERIFY
        assert(str    == X);
        assert(result == X);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("");

        // TEST
        int len = str.length();

        // VERIFY
        assert(len == 0);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("Hello");

        // TEST
        int cap = str.capacity();

        // VERIFY
        assert(cap == 255); // STRING_SIZE - 1
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abc");

        // TEST
        str[1] = 'z';
        char ch = str[1];

        // VERIFY
        assert(str == "azc");
        assert(ch == 'z');
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("Hello");
        String str2("World");

        // TEST
        str1 += str2;

        // VERIFY
        assert(str1 == "HelloWorld");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("Foo");
        String str2("Bar");

        // TEST
        String result = str1 + str2;

        // VERIFY
        assert(result == "FooBar");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String sub = str.substr(1, 3);

        // VERIFY
        assert(sub == "bcd");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("hello");

        // TEST
        int idx = str.findch(0, 'z');

        // VERIFY
        assert(idx == -1);
    }


    
    
    std::cout << "Done testing XXX." << std::endl;
    return 0;
}

