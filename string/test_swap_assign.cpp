#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    {
        // SETUP FIXTURE
        String left("jU8&x#pL!2Qk@VwZc9^fG");
        String right("mN3$w*R^8Vz!yTq7&bK");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "mN3$w*R^8Vz!yTq7&bK");
        assert(right == "jU8&x#pL!2Qk@VwZc9^fG");
    }

    {
        // SETUP FIXTURE
        String left("pQ*9#kJ!4wZ@r^vT6bC+");
        String right("xL$3&mN7^y!Fz@qR2#D");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "xL$3&mN7^y!Fz@qR2#D");
        assert(right == "pQ*9#kJ!4wZ@r^vT6bC+");
    }

    {
        // SETUP FIXTURE
        String left("vB#7@zR*9!qL^pM2&wK$");
        String right("fH!3$yT^8&xC@rQ1*D");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "fH!3$yT^8&xC@rQ1*D");
        assert(right == "vB#7@zR*9!qL^pM2&wK$");
    }

    {
        // SETUP FIXTURE
        String left("gT^9!xK@3&vB*5#rP$");
        String right("sW!4$yL^7@qF&2*Z");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "sW!4$yL^7@qF&2*Z");
        assert(right == "gT^9!xK@3&vB*5#rP$");
    }

    {
        // SETUP FIXTURE
        String left("mZ*8@qR!6^wB$3&xT");
        String right("dL!2$yF^7&vK@1*P");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "dL!2$yF^7&vK@1*P");
        assert(right == "mZ*8@qR!6^wB$3&xT");
    }

    {
        // SETUP FIXTURE
        String left("cV#5!xW*9@rL^2$kM");
        String right("hQ$8^yT!3&vB@7*Z");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "hQ$8^yT!3&vB@7*Z");
        assert(right == "cV#5!xW*9@rL^2$kM");
    }

    {
        // SETUP FIXTURE
        String left("bF^3!qL*7@vR$2&wP");
        String right("nX$9&yT^1!xC@5*D");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "nX$9&yT^1!xC@5*D");
        assert(right == "bF^3!qL*7@vR$2&wP");
    }

    {
        // SETUP FIXTURE
        String left("jK!4^xB@6&vR*3$zP");
        String right("tM$7&yL!2^qF@8*X");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "tM$7&yL!2^qF@8*X");
        assert(right == "jK!4^xB@6&vR*3$zP");
    }

    {
        // SETUP FIXTURE
        String left("wP*9@rV!2^xB$6&kT");
        String right("cF$3!yQ^7&vL@1*Z");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "cF$3!yQ^7&vL@1*Z");
        assert(right == "wP*9@rV!2^xB$6&kT");
    }

    {
        // SETUP FIXTURE
        String left("sH!6^qK@4&vB*9$rM");
        String right("pL$2&yT!8^xC@3*D");

        // TEST
        left.swap(right);

        // VERIFY
        assert(left == "pL$2&yT!8^xC@3*D");
        assert(right == "sH!6^qK@4&vB*9$rM");
    }

    std::cout << "Done testing swap." << std::endl;
    return 0;
}
