#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("frefjnjjfjenjfrjkvfkwnfgnrgefd");

        // TEST
        char result = str[4];

        // VERIFY
        assert(str == "frefjnjjfjenjfrjkvfkwnfgnrgefd");
        assert(result == 'j');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("ndfgvbejfbejnfjvnefjkfnrekwfvwe");

        // TEST
        char result = str[0];

        // VERIFY
        assert(str == "ndfgvbejfbejnfjvnefjkfnrekwfvwe");
        assert(result == 'n');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("rfvnrfewfjenfjnfjnwefjfnrvrvwfe");

        // TEST
        char result = str[25];

        // VERIFY
        assert(str == "rfvnrfewfjenfjnfjnwefjfnrvrvwfe");
        assert(result == 'v');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("wejfvwnefjrnwevfjrnfejvnferjnver");

        // TEST
        char result = str[10];

        // VERIFY
        assert(str == "wejfvwnefjrnwevfjrnfejvnferjnver");
        assert(result == 'r');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("frefjnjjfjenjfrjkvfkwnfgnrgefdnnfejnfnvrejnfvrejnvrjenfrjenvrnrejfnrenvrfjnvrjfnwjnvrfjenvwenvfjnwrfjnenfjnwevjnfvrjnfrenvjfnwrnvrjnfwenvjfnrvnwefnvrjfnwefjrfnwrfjvnerfjnvwrjnvfernjvwefjvnfjwernvrfnrvrjwnrfjn");

        // TEST
        char result = str[100];

        // VERIFY
        assert(str == "frefjnjjfjenjfrjkvfkwnfgnrgefdnnfejnfnvrejnfvrejnvrjenfrjenvrnrejfnrenvrfjnvrjfnwjnvrfjenvwenvfjnwrfjnenfjnwevjnfvrjnfrenvjfnwrnvrjnfwenvjfnrvnwefnvrjfnwefjrfnwrfjvnerfjnvwrjnvfernjvwefjvnfjwernvrfnrvrjwnrfjn");
        assert(result == 'j');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("vjrfwenvrjfnwjenvfjnwrnvrfjnwenrvjenwrnfejnfjenrvfnrvenrvrfnwrfjvnrejfnvrjnvjnvfnrwenvjenrvjnrvjnrfnwrnfjenrfnjvernvjenrfvjenwrfnvwrfnrwenvrfjnrfnvjnrvfnwjnvrjfnrjfnrjnvrjnwrfnrnvjnrfnvjrfnvrjnwrnvfjrwenvrjnfjwenf");

        // TEST
        char result = str[150];

        // VERIFY
        assert(str == "vjrfwenvrjfnwjenvfjnwrnvrfjnwenrvjenwrnfejnfjenrvfnrvenrvrfnwrfjvnrejfnvrjnvjnvfnrwenvjenrvjnrvjnrfnwrnfjenrfnjvernvjenrfvjenwrfnvwrfnrwenvrfjnrfnvjnrvfnwjnvrjfnrjfnrjnvrjnwrfnrnvjnrfnvjrfnvrjnwrnvfjrwenvrjnfjwenf");
        assert(result == 'v');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("nefnvrnfejnvfjrenvjenrfnvjfjnfjnfjnwrjfnvrjnfnvwrfnvrjfnwenvrnwjvfjrnwrjnvjenwfjwrfnvwrjnfrvrfnvnfnwefnvnfjvnrjnrvnrfnvfnrjfnvrnvjfnrvenrvjnfnrfnvrjnvrfnrnvrfnvjnwrnvjfnvjnfrvjnrvfnvrjfnvrnvrfnvrjnfvrjwnvrjn");

        // TEST
        char result = str[200];

        // VERIFY
        assert(str == "nefnvrnfejnvfjrenvjenrfnvjfjnfjnfjnwrjfnvrjnfnvwrfnvrjfnwenvrnwjvfjrnwrjnvjenwfjwrfnvwrjnfrvrfnvnfnwefnvnfjvnrjnrvnrfnvfnrjfnvrnvjfnrvenrvjnfnrfnvrjnvrfnrnvrfnvjnwrnvjfnvjnfrvjnrvfnvrjfnvrnvrfnvrjnfvrjwnvrjn");
        assert(result == 'j');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("jnvfnrnwfjfnrvrjfnvrnvfjnwrjnwrnvrfnvnrfjvrnvrfjnfnwefjrnvrjnvrfnvrjfnvrfnvrnvfnwrfjwrnvrjfnvrfnwrfnwfjwrjfnvrfjnvrfnwrnvjnrfnvrnvfnwrjnfwrfjwenvrjfnwrnvjfnvrjfnvrfnvrnvfjnwrnvfjrwenvjfnwrnvrjfnwrnvjfnrvenvjfn");

        // TEST
        char result = str[150];

        // VERIFY
        assert(str == "jnvfnrnwfjfnrvrjfnvrnvfjnwrjnwrnvrfnvnrfjvrnvrfjnfnwefjrnvrjnvrfnvrjfnvrfnvrnvfnwrfjwrnvrjfnvrfnwrfnwfjwrjfnvrfjnvrfnwrnvjnrfnvrnvfnwrjnfwrfjwenvrjfnwrnvjfnvrjfnvrfnvrnvfjnwrnvfjrwenvjfnwrnvrjfnwrnvjfnrvenvjfn");
        assert(result == 'r');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("nvjenfvnwjfnvrfnwrjfnwrnvfnvjenrvnrvjnrvjnrvjenrfnjenvrnvrfnwrfnwenvrjnvrjfnwrfnvrfjnvjnrvwrfnvjenwrnvjfnvnvrfnwenvjnwrfjnvrjnwrfnwrfjvnvrfnvnwrfjwrfjvnrvrjnwrfnvnfjvnfjnrfnvrjnvrjnwfjrvrjnvrjfnvrfnwenvjnwrfnvrjn");

        // TEST
        char result = str[205];

        // VERIFY
        assert(str == "nvjenfvnwjfnvrfnwrjfnwrnvfnvjenrvnrvjnrvjnrvjenrfnjenvrnvrfnwrfnwenvrjnvrjfnwrfnvrfjnvjnrvwrfnvjenwrnvjfnvnvrfnwenvjnwrfjnvrjnwrfnwrfjvnvrfnvnwrfjwrfjvnrvrjnwrfnvnfjvnfjnrfnvrjnvrjnwfjrvrjnvrjfnvrfnwenvjnwrfnvrjn");
        assert(result == 'r');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const String str("constStringTest");

        // TEST
        char result = str[0];

        // VERIFY
        assert(str == "constStringTest");
        assert(result == 'c');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const String str("anotherConstTest");

        // TEST
        char result = str[5];

        // VERIFY
        assert(str == "anotherConstTest");
        assert(result == 'e');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const String str("lastConstCheck");

        // TEST
        char result = str[13];

        // VERIFY
        assert(str == "lastConstCheck");
        assert(result == 'k');
    }

    std::cout << "Done testing subscript ." << std::endl;
    return 0;
}