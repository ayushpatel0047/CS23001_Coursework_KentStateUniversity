#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("ffewdvgbrwfedvgbrwefs");
        String right("ggfewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "ffewdvgbrwfedvgbrwefs");
        assert(right == "ggfewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("abcffewdvgbrwfedvgbrwefs");
        String right("ffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "abcffewdvgbrwfedvgbrwefs");
        assert(right == "ffewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("ffewdvgbrwfedvgbrwefs");
        String right("abcffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left == "ffewdvgbrwfedvgbrwefs");
        assert(right == "abcffewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("ffewdvgbrwfedvgbrwefsabc");
        String right("ffewdvgbrwfedvgbrwefsbcd");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "ffewdvgbrwfedvgbrwefsabc");
        assert(right == "ffewdvgbrwfedvgbrwefsbcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String left("ffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        String right("zzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "ffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        assert(right == "zzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String left("abrffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        String right("ffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "abrffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        assert(right == "ffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String left("ffewdvgbrwfedvgbrwefsabcffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        String right("ffewdvgbrwfedvgbrwefsbcdffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "ffewdvgbrwfedvgbrwefsabcffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        assert(right == "ffewdvgbrwfedvgbrwefsbcdffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String left("zzzzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        String right("zzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left == "zzzzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        assert(right == "zzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String left("aaffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        String right("zzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left == "aaffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
        assert(right == "zzffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefsffewdvgbrwfedvgbrwefs");
    }

        {
        //------------------------------------------------------
        String a("Hello");
        String b("World");

        bool result = (a != b);

        assert(result == true);
        assert(a == "Hello");
        assert(b == "World");
    }

    {
        //------------------------------------------------------
        String a("Same");
        String b("Same");

        bool result = (a != b);

        assert(result == false);
        assert(a == "Same");
        assert(b == "Same");
    }

    {
        //------------------------------------------------------
        String a("World");
        String b("Hello");

        bool result = (a > b);

        assert(result == true);
        assert(a == "World");
        assert(b == "Hello");
    }

    {
        //------------------------------------------------------
        String a("Alpha");
        String b("Beta");

        bool result = (a <= b);

        assert(result == true);
        assert(a == "Alpha");
        assert(b == "Beta");
    }

    {
        //------------------------------------------------------
        String a("Gamma");
        String b("Beta");

        bool result = (a >= b);

        assert(result == true);
        assert(a == "Gamma");
        assert(b == "Beta");
    }

    {
        //------------------------------------------------------
        const String s("TestString");
        char c = s[4];

        assert(c == 'S');
        assert(s == "TestString");
    }


    std::cout << "Done testing less-than operator." << std::endl;
    return 0;
}