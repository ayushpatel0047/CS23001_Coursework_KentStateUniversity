//  String class test program
// 
//  Name:  XXX
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
        String  left(X);
        String  right(X);

        // TEST
        RESULT_TYPE result = (left OP right);

        // VERIFY
        assert(result == X);
        assert(left   == X);
        assert(right  == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(X);
        String  right(X);

        // TEST
        RESULT_TYPE result = (left OP right);

        // VERIFY
        assert(result == X);
        assert(left   == X);
        assert(right  == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(X);
        String  right(X);

        // TEST
        RESULT_TYPE result = (left OP right);

        // VERIFY
        assert(result == X);
        assert(left   == X);
        assert(right  == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(X);
        String  right(X);

        // TEST
        RESULT_TYPE result = (left OP right);

        // VERIFY
        assert(result == X);
        assert(left   == X);
        assert(right  == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(X);
        String  right(X);

        // TEST
        RESULT_TYPE result = (left OP right);

        // VERIFY
        assert(result == X);
        assert(left   == X);
        assert(right  == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(X);
        String  right(X);

        // TEST
        RESULT_TYPE result = (left OP right);

        // VERIFY
        assert(result == X);
        assert(left   == X);
        assert(right  == X);
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("Hi");
        String right("There");

        // TEST
        left += right;

        // VERIFY
        assert(left == "HiThere");
        assert(right == "There");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("Test");

        // TEST
        bool result = (left == "Test");

        // VERIFY
        assert(result == true);
        assert(left == "Test");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("abc");

        // TEST
        bool result = (left < "def");

        // VERIFY
        assert(result == true);
        assert(left == "abc");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("xyz");
        String right("abc");

        // TEST
        bool result = (left > right);

        // VERIFY
        assert(result == true);
        assert(left == "xyz");
        assert(right == "abc");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("one");
        String right("two");

        // TEST
        bool result = (left != right);

        // VERIFY
        assert(result == true);
        assert(left == "one");
        assert(right == "two");
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("apple");
        String right("apple");

        // TEST
        bool result = (left <= right);

        // VERIFY
        assert(result == true);
        assert(left == "apple");
        assert(right == "apple");
    }

     
    
    
    std::cout << "Done testing XXX." << std::endl;
    return 0;
}
