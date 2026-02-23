#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String a("Hello");
        String b("World");

        // TEST
        String res = a + b;

        // VERIFY
        assert(res == "HelloWorld");
        assert(a == "Hello");
        assert(b == "World");
        std::cout << "Test 1 passed\n";
    }

    {
        //------------------------------------------------------
        String x("123");
        String y("456");

        String res = x + y;

        assert(res == "123456");
        assert(x == "123");
        assert(y == "456");
        std::cout << "Test 2 passed\n";
    }

    {
        //------------------------------------------------------
        String str1("");
        String str2("NonEmpty");

        String res = str1 + str2;

        assert(res == "NonEmpty");
        assert(str1 == "");
        assert(str2 == "NonEmpty");
        std::cout << "Test 3 passed\n";
    }

    {
        //------------------------------------------------------
        String one("Prefix");
        String two("");

        String res = one + two;

        assert(res == "Prefix");
        assert(one == "Prefix");
        assert(two == "");
        std::cout << "Test 4 passed\n";
    }

    {
        //------------------------------------------------------
        String alpha("A");
        String beta("B");

        String res = alpha + beta;

        assert(res == "AB");
        assert(alpha == "A");
        assert(beta == "B");
        std::cout << "Test 5 passed\n";
    }

    {
        //------------------------------------------------------
        String lhs("abc");
        String rhs("def");

        String res = lhs + rhs;

        assert(res == "abcdef");
        assert(lhs == "abc");
        assert(rhs == "def");
        std::cout << "Test 6 passed\n";
    }

    {
        //------------------------------------------------------
        String s1("same");
        String s2("same");

        String res = s1 + s2;

        assert(res == "samesame");
        assert(s1 == "same");
        assert(s2 == "same");
        std::cout << "Test 7 passed\n";
    }

    {
        //------------------------------------------------------
        String num("42");
        String txt("life");

        String res = num + txt;

        assert(res == "42life");
        assert(num == "42");
        assert(txt == "life");
        std::cout << "Test 8 passed\n";
    }

    {
        //------------------------------------------------------
        String long1("ThisIsALongString");
        String long2("WithMoreChars");

        String res = long1 + long2;

        assert(res == "ThisIsALongStringWithMoreChars");
        assert(long1 == "ThisIsALongString");
        assert(long2 == "WithMoreChars");
        std::cout << "Test 9 passed\n";
    }

    {
        //------------------------------------------------------
        String sp1("Hello ");
        String sp2("There!");

        String res = sp1 + sp2;

        assert(res == "Hello There!");
        assert(sp1 == "Hello ");
        assert(sp2 == "There!");
        std::cout << "Test 10 passed\n";
    }

    //   .............................

        {
        //------------------------------------------------------
        String a("Hello");
        String b("World");

        a += b;  

        assert(a == "HelloWorld");   
        assert(b == "World");        
        std::cout << "Test 11 passed\n";
    }

    {
        //------------------------------------------------------
        String x("");
        String y("NonEmpty");

        x += y;  

        assert(x == "NonEmpty");
        assert(y == "NonEmpty");
        std::cout << "Test 12 passed\n";
    }

    {
        //------------------------------------------------------
        String one("Prefix");
        String two("");

        one += two;  

        assert(one == "Prefix");
        assert(two == "");
        std::cout << "Test 13 passed\n";
    }

    {
        //------------------------------------------------------
        String alpha("A");
        String beta("B");

        alpha += beta;  

        assert(alpha == "AB");
        assert(beta == "B");
        std::cout << "Test 14 passed\n";
    }

    {
        //------------------------------------------------------
        String s1("same");
        String s2("same");

        s1 += s2;  

        assert(s1 == "samesame");
        assert(s2 == "same");
        std::cout << "Test 15 passed\n";
    }


    std::cout << "Done testing concat.\n";
    return 0;
}
