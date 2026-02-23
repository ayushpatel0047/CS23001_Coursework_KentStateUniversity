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

        // TEST
        String  str(X);

        // VERIFY
        assert(str == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(X);

        // VERIFY
        assert(str == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(X);

        // VERIFY
        assert(str == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(X);

        // VERIFY
        assert(str == YYY);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(X);

        // VERIFY
        assert(str == YYY);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str;

        // TEST
        int len = str.length();

        // VERIFY
        assert(len == 0);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str('A');

        // TEST
        char ch = str[0];

        // VERIFY
        assert(str == "A");
        assert(ch == 'A');
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("test");
        String str2("test");

        // TEST
        bool equal = (str1 == str2);

        // VERIFY
        assert(equal == true);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("abc");
        String str2("def");

        // TEST
        bool lt = (str1 < str2);

        // VERIFY
        assert(lt == true);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("hello");

        // TEST
        String sub = str.substr(0, 4);

        // VERIFY
        assert(sub == "hello");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("findme");

        // TEST
        int idx = str.findch(0, 'm');

        // VERIFY
        assert(idx == 4);
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abc");

        // TEST
        int idx = str.findch(0, 'z');

        // VERIFY
        assert(idx == -1);
    }

     
    
    std::cout << "Done testing XXX." << std::endl;
    return 0;
}

