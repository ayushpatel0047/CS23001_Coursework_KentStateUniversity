#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("dkfknvjfrenfdvredveaDX");
        int result = str.findch(0, 'd');

        // VERIFY
        assert(str == "dkfknvjfrenfdvredveaDX");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("kfnvfjdkfbrefnevrefdwnviKD");
        int result = str.findch(5, 'j');

        // VERIFY
        assert(str == "kfnvfjdkfbrefnevrefdwnviKD");
        assert(result == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("rkfnreufjenfkwlvmqodnvwiXnck");
        int result = str.findch(10, 'n');

        // VERIFY
        assert(str == "rkfnreufjenfkwlvmqodnvwiXnck");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("akfbrjenfdkvoeafvnqplsmekfnvje");
        int result = str.findch(7, 'n');

        // VERIFY
        assert(str == "akfbrjenfdkvoeafvnqplsmekfnvje");
        assert(result == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("bnvkerqfnmpvelwfjdnvqeundfnskqpsfdvnE");
        int result = str.findch(20, 'q');

        // VERIFY
        assert(str == "bnvkerqfnmpvelwfjdnvqeundfnskqpsfdvnE");
        assert(result == 20);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("jvnodkfnwlmskdjfbrvnqeiwndvkqeopwlf");
        int result = str.findch(11, 's');

        // VERIFY
        assert(str == "jvnodkfnwlmskdjfbrvnqeiwndvkqeopwlf");
        assert(result == 11);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("lskdjnfefnkvmdwofnrkvqeundqpowefjwoefjr");
        int result = str.findch(19, 'k');

        // VERIFY
        assert(str == "lskdjnfefnkvmdwofnrkvqeundqpowefjwoefjr");
        assert(result == 19);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("wdklqnepfbvcnmwjeonfkqneofjqpwoelfnvkqfneoxpwl");
        int result = str.findch(25, 'f');

        // VERIFY
        assert(str == "wdklqnepfbvcnmwjeonfkqneofjqpwoelfnvkqfneoxpwl");
        assert(result == 25);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("aodsnfjwenfejrnfoenwndkqopwefjqonvkeqpjfwovndqflwjfn");
        int result = str.findch(35, 'e');

        // VERIFY
        assert(str == "aodsnfjwenfejrnfoenwndkqopwefjqonvkeqpjfwovndqflwjfn");
        assert(result == 35);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE (
        String str("jdfnvpeknvpeonpvlwkqmfvnwqpvnfwqenrflvnpqeofnqeopnvqlwenfqwepovnlqwenfqlnwenpoqwefqjvnqwenfopvnqlwenfqwenfvpqnvwpeovnwqenfvlqwenfoqvpnelqwvpneopvnweflpovneowqnfqjenfpqnvwenfoqewqnvlepfqvwnpovlnweopnvqpwenovpwqnvopqwfnv");
        int result = str.findch(150, 'p');

        // VERIFY
        assert(str == "jdfnvpeknvpeonpvlwkqmfvnwqpvnfwqenrflvnpqeofnqeopnvqlwenfqwepovnlqwenfqlnwenpoqwefqjvnqwenfopvnqlwenfqwenfvpqnvwpeovnwqenfvlqwenfoqvpnelqwvpneopvnweflpovneowqnfqjenfpqnvwenfoqewqnvlepfqvwnpovlnweopnvqpwenovpwqnvopqwfnv");
        assert(result == 150);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("qmwvkfpwnlkewmvplkqwefvnwopefvnqwpnvlkqwnveqpnlkvpwneqpvnweopvnqwenflkqnvweovnpqonfwepovnwqjfnqwpnvelnvpqwenpvqwpovnfqopvnwpovnwqnfvoeqvpnoweqpvnweonqvnlefqwpnvqownefpnvweofnvqpewnvqpwenvwqonvpqweovnpqwoepnvqwnfpvqwenvqnwe");
        int result = str.findch(190, 'n');

        // VERIFY
        assert(str == "qmwvkfpwnlkewmvplkqwefvnwopefvnqwpnvlkqwnveqpnlkvpwneqpvnweopvnqwenflkqnvweovnpqonfwepovnwqjfnqwpnvelnvpqwenpvqwpovnfqopvnwpovnwqnfvoeqvpnoweqpvnweonqvnlefqwpnvqownefpnvweofnvqpewnvqpwenvwqonvpqweovnpqwoepnvqwnfpvqwenvqnwe");
        assert(result == 190);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("oenwvlqwenvowenpvqwlenvqpwqenflqjvnwenpqvnelwenfqwepovnpqenfpoqlfwenpoqwvnqweovnpqwelvnpqwenflqwenfopvneopqwlvenqwpvnlwepvnqwneflpnvqwnefqnwfpvneqweqjfnvqwenflpqnvwpenvlweopvnqwenlfqnvpqweonvqwenlvnqpwenfnlwpnvqwenovpwqlnvwq");
        int result = str.findch(180, 'f');

        // VERIFY
        assert(str == "oenwvlqwenvowenpvqwlenvqpwqenflqjvnwenpqvnelwenfqwepovnpqenfpoqlfwenpoqwvnqweovnpqwelvnpqwenflqwenfopvneopqwlvenqwpvnlwepvnqwneflpnvqwnefqnwfpvneqweqjfnvqwenflpqnvwpenvlweopvnqwenlfqnvpqweonvqwenlvnqpwenfnlwpnvqwenovpwqlnvwq");
        assert(result == 180);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str("kqnvwpvnepqwefnqpvlwkenfpqvnlpvnwopfnvlqwpnefpvnqwenpvqowenfqlwenpvwenfvpqwnvpenovpwqenfvpqwenvpenvwenpqonvqeofnvpqwenflqwenfpvnwqpofnwlqvnwenfpqneflpnvqwnefpqnvpqwnfvpqlnvpqwefnwqenfvpqwnvpenovwpnvqwnefpnvqwefnvlqnwpeofnvqpl");
        int result = str.findch(220, 'n');

        // VERIFY
        assert(str == "kqnvwpvnepqwefnqpvlwkenfpqvnlpvnwopfnvlqwpnefpvnqwenpvqowenfqlwenpvwenfvpqwnvpenovpwqenfvpqwenvpenvwenpqonvqeofnvpqwenflqwenfpvnwqpofnwlqvnwenfpqneflpnvqwnefpqnvpqwnfvpqlnvpqwefnwqenfvpqwnvpenovwpnvqwnefpnvqwefnvlqnwpeofnvqpl");
        assert(result == 220);
    }

    std::cout << "Done testing findch." << std::endl;
    return 0;
}