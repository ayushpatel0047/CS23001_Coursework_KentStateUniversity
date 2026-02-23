#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("Howdy Neighbor");

        // TEST
        String result = str.substr(0, 4);

        // VERIFY
        assert(str == "Howdy Neighbor");
        assert(result == "Howdy");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("Hello World");

        // TEST
        String result = str.substr(6, 10);

        // VERIFY
        assert(str == "Hello World");
        assert(result == "World");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String result = str.substr(2, 4);

        // VERIFY
        assert(str == "abcdef");
        assert(result == "cde");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("Programming is fun");

        // TEST
        String result = str.substr(0, 10);

        // VERIFY
        assert(str == "Programming is fun");
        assert(result == "Programming");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("This is a string test");

        // TEST
        String result = str.substr(5, 10);

        // VERIFY
        assert(str == "This is a string test");
        assert(result == "is a s");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("njncjandjandjdkqwandkjefiqwfdkfjqwmdewjqkfngkwnfwqkfqlwnekfnewfekfnqekneknwkqwqnqekqeneqkkwqkwqnknnennedjkwnwqnwqnwjekqABCDEFGHIJKLMOPQRSTWXYZ");

        // TEST
        String result = str.substr(130,141);

        // VERIFY
        assert(str == "njncjandjandjdkqwandkjefiqwfdkfjqwmdewjqkfngkwnfwqkfqlwnekfnewfekfnqekneknwkqwqnqekqeneqkkwqkwqnknnennedjkwnwqnwqnwjekqABCDEFGHIJKLMOPQRSTWXYZ");
        assert(result == "LMOPQRSTWXYZ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str("NJNDJIDWIJDIJWIKNCWEJKDJFIQWDJ1234567789--3--304-104-35-2-43-503005-3204-fldglerfmfkjerdm,rejlerfmdskfowlfmodfkolewfmlwkfewlfkoefkeowfkeowfelkfoefoekferofrnknekrnkewnrqkrqwmrqkmrkeqmrkqrmkejrejeqjrkererjiejqoweko    qeokoeqwrqfkrf");

        // TEST
        String result = str.substr(40, 70);

        // VERIFY
        assert(str == "NJNDJIDWIJDIJWIKNCWEJKDJFIQWDJ1234567789--3--304-104-35-2-43-503005-3204-fldglerfmfkjerdm,rejlerfmdskfowlfmodfkolewfmlwkfewlfkoefkeowfkeowfelkfoefoekferofrnknekrnkewnrqkrqwmrqkmrkeqmrkqrmkejrejeqjrkererjiejqoweko    qeokoeqwrqfkrf");
        assert(result == "--3--304-104-35-2-43-503005-320");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str("jjdekdjiejdfewnfnq889294901239403851204194059193cmksdfkedknfekwkmwkmfmgkewkmkvmfks fdsnfekfnkdfksdfnknfkdfmdnkfneikjfsdfdkndkfndkfiefdik786805049069029-394-4259-34913-954eotgj5jmg9remgigmfvc gigmf ikjtig ikrtfmv itkrf,g vtk,gmitjgninnfging5tyn");
        // TEST
        String result = str.substr(150, 161);

        // VERIFY
        assert(str == "jjdekdjiejdfewnfnq889294901239403851204194059193cmksdfkedknfekwkmwkmfmgkewkmkvmfks fdsnfekfnkdfksdfnknfkdfmdnkfneikjfsdfdkndkfndkfiefdik786805049069029-394-4259-34913-954eotgj5jmg9remgigmfvc gigmf ikjtig ikrtfmv itkrf,g vtk,gmitjgninnfging5tyn");
        assert(result == "9-394-4259-3");
    }

    std::cout << "Done testing substr." << std::endl;
    return 0;
}