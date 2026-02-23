#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("abcabcabc");
        String str2("ab");
        int result = str1.findstr(0, str2);

        // VERIFY
        assert(str1 == "abcabcabc");
        assert(str2 == "ab");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("helloworldhello");
        String str2("world");
        int result = str1.findstr(0, str2);

        // VERIFY
        assert(str1 == "helloworldhello");
        assert(str2 == "world");
        assert(result == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("pineapplepineapple");
        String str2("pine");
        int result = str1.findstr(5, str2);

        // VERIFY
        assert(str1 == "pineapplepineapple");
        assert(str2 == "pine");
        assert(result == 9);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("strawberrymango");
        String str2("mango");
        int result = str1.findstr(0, str2);

        // VERIFY
        assert(str1 == "strawberrymango");
        assert(str2 == "mango");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("kiwiguavabanana");
        String str2("guava");
        int result = str1.findstr(0, str2);

        // VERIFY
        assert(str1 == "kiwiguavabanana");
        assert(str2 == "guava");
        assert(result == 4);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("papayapapaya");
        String str2("papaya");
        int result = str1.findstr(1, str2);

        // VERIFY
        assert(str1 == "papayapapaya");
        assert(str2 == "papaya");
        assert(result == 6);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("cherryorangegrapefruit");
        String str2("orange");
        int result = str1.findstr(5, str2);

        // VERIFY
        assert(str1 == "cherryorangegrapefruit");
        assert(str2 == "orange");
        assert(result == 6);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("blueberrylemonpear");
        String str2("lemon");
        int result = str1.findstr(8, str2);

        // VERIFY
        assert(str1 == "blueberrylemonpear");
        assert(str2 == "lemon");
        assert(result == 9);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("abcdefghijklmnoabcdefghijklmno");
        String str2("def");
        int result = str1.findstr(3, str2);

        // VERIFY
        assert(str1 == "abcdefghijklmnoabcdefghijklmno");
        assert(str2 == "def");
        assert(result == 3);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str1("abcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmno");
        String str2("klmn");
        int result = str1.findstr(10, str2);

        // VERIFY
        assert(str1 == "abcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmnoabcdefghijklmno");
        assert(str2 == "klmn");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str1("qrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyz");
        String str2("stuv");
        int result = str1.findstr(2, str2);

        // VERIFY
        assert(str1 == "qrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyzqrstuvwxyz");
        assert(str2 == "stuv");
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str1("mnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrst");
        String str2("qrst");
        int result = str1.findstr(4, str2);

        // VERIFY
        assert(str1 == "mnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrstmnopqrst");
        assert(str2 == "qrst");
        assert(result == 4);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("fewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgerg");
        String str2("ewg");
        int result = str1.findstr(12, str2);

        // VERIFY
        assert(str1 == "fewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgergfwrgfwerfgrwegfewrgwergewfewgrfwergfwergfewrgerg");
        assert(str2 == "ewg");
        assert(result == 12);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("jjdjfjdfkjfojvnifrjfkvifmkejiqijskqdwqndDfijjafkdfnejfwmfwijwidkfdifjefnkdjwiwkdwmdjnndjndjnjdwjdkiiwdindidwdknowiowojnjwdnwdnwiwejqkqoiwqowjqwqowjqowqmwjqowijqiwjqoiwjqmsiswodnwoidndiwodoiwoioiqiniwoqwnni");
        String str2("dw");
        int result = str1.findstr(35, str2);

        // VERIFY
        assert(str1 == "jjdjfjdfkjfojvnifrjfkvifmkejiqijskqdwqndDfijjafkdfnejfwmfwijwidkfdifjefnkdjwiwkdwmdjnndjndjnjdwjdkiiwdindidwdknowiowojnjwdnwdnwiwejqkqoiwqowjqwqowjqowqmwjqowijqiwjqoiwjqmsiswodnwoidndiwodoiwoioiqiniwoqwnni");
        assert(str2 == "dw");
        assert(result == 35);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("jkfknskfvnfnksfnkngkfsvfnkoskowkookeoqwkodfoknlwnfdfkdkfmekdkmdmwwfmdkfmkdmfdmfkewfmekmdekmekdma,dms,amdsmdkmkeerjgnkeknekqfrekmfkrgkkrngnknwkqnngwknrfngENFWLNnegnnenenreneknkenfkenekfekeknernejnekfnkenekfekrnferjerwrejrwjrjrejrjerejrejrejr");
        String str2("dm");
        int result = str1.findstr(62, str2);

        // VERIFY
        assert(str1 == "jkfknskfvnfnksfnkngkfsvfnkoskowkookeoqwkodfoknlwnfdfkdkfmekdkmdmwwfmdkfmkdmfdmfkewfmekmdekmekdma,dms,amdsmdkmkeerjgnkeknekqfrekmfkrgkkrngnknwkqnngwknrfngENFWLNnegnnenenreneknkenfkenekfekeknernejnekfnkenekfekrnferjerwrejrwjrjrejrjerejrejrejr");
        assert(str2 == "dm");
        assert(result == 62);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1("nnnfnkdsfndksnfkffffddnkfngkernkgkgfoqwjoqwnfkwoefngrfkfmewofoewkoewkoefeelfkeokefeldfkoewfkoewokfvmgrdfslfkekeokoekekreorereorkeoreorkeokfokmfejoorowrmgjqwlkejoemgrjrlqwjrogljqoerkgjooejorrprjwjwerjoerjoewjroeworjweorjeorjeowroewjroejrowejrjeorjeorj");
        String str2("jrl");
        int result = str1.findstr(165, str2);

        // VERIFY
        assert(str1 == "nnnfnkdsfndksnfkffffddnkfngkernkgkgfoqwjoqwnfkwoefngrfkfmewofoewkoewkoefeelfkeokefeldfkoewfkoewokfvmgrdfslfkekeokoekekreorereorkeoreorkeokfokmfejoorowrmgjqwlkejoemgrjrlqwjrogljqoerkgjooejorrprjwjwerjoerjoewjroeworjweorjeorjeowroewjroejrowejrjeorjeorj");
        assert(str2 == "jrl");
        assert(result == 165);
    }

    std::cout << "Done testing findstr." << std::endl;
    return 0;
}