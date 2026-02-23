#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        String lhs("hello");
        String rhs("hello");
        assert(lhs == rhs);
    }

    {
        String lhs("world");
        String rhs("earth");
        assert(!(lhs == rhs));
    }

    {
        String lhs("HeLLo123");
        String rhs("HeLLo123");
        assert(lhs == rhs);
    }

    {
        String lhs("Goodbye123");
        String rhs("goodbye123");
        assert(!(lhs == rhs));
    }

    {
        String lhs("Adfdwasdvseafdvdgqwfsvfbtwfbghtrwerw45yjhtgeawrty5t4egfvhy5t4efghh");
        String rhs("Adfdwasdvseafdvdgqwfsvfbtwfbghtrwerw45yjhtgeawrty5t4egfvhy5t4efghh");
        assert(lhs == rhs);
    }

    {
        String lhs("Bedqwerwety4refgbhjyu654rwefghjtu6y5trghjui7u6y5rgnhng");
        String rhs("CBedqwerwety4refgbhjyu654rwefghjtu6y5trghjui7u6y5rgnhng");
        assert(!(lhs == rhs));
    }

    {
        String lhs("ddaDfeaFDARwaSDffbgrESFgrtweAFgreFDfdgtrweqweRTYgfdSDFasdfQWERTrteSDfgfhjTREwasdfgQWERtyWERTwetyfdg");
        String rhs("ddaDfeaFDARwaSDffbgrESFgrtweAFgreFDfdgtrweqweRTYgfdSDFasdfQWERTrteSDfgfhjTREwasdfgQWERtyWERTwetyfdg");
        assert(lhs == rhs);
    }

    {
        String lhs("qdaDfeaFDARweSDffbgrESFgretweFGreFDgtreWERwasdfQWERTrteSDffgfhjTREwasdfgQWERtyWEfTQWERTywasdfgfdas");
        String rhs("ddaDfeaFDARwaSDffbgrESFgrtweAFgreFDfdgtrweqweRTYgfdSDFasdfQWERTrteSDfgfhjTREwasdfgQWERtyWERTwetyfdg");
        assert(!(lhs == rhs));
    }

    {
        String lhs("AedrFSAsdfqweDSAFERTrewSDFYdfgSDFYtrwerfdSDFgreFDgfTReWdfgsdaGRErtWEFSdfGRfdSWErtfdgRewrfdGFDrteWAS");
        String rhs("AedrFSAsdfqweDSAFERTrewSDFYdfgSDFYtrwerfdSDFgreFDgfTReWdfgsdaGRErtWEFSdfGRfdSWErtfdgRewrfdGFDrteWAS");
        assert(lhs == rhs);
    }

    {
        String lhs("DFASdgreDfgasWERwtrfGFdSDFreTYwertSdfgeRTewqREWqFDergrfdSWErtgfFdsaGREsdafSDFRtgewqrtygfdasSDFyertqWE");
        String rhs("AedrFSAsdfqweDSAFERTrewSDFYdfgSDFYtrwerfdSDFgreFDgfTReWdfgsdaGRErtWEFSdfGRfdSWErtfdgRewrfdGFDrteWAS");
        assert(!(lhs == rhs));
    }

    {
        String lhs("GhfTeRweSDFgrtreRTgfdAWEqQWERTreqwDFGRsfRtWERfdasREWwrtGFDAfdasREwasdfGRTrewqDFGreTasdfGFSDFdgaFSDf");
        String rhs("GhfTeRweSDFgrtreRTgfdAWEqQWERTreqwDFGRsfRtWERfdasREWwrtGFDAfdasREwasdfGRTrewqDFGreTasdfGFSDFdgaFSDf");
        assert(lhs == rhs);
    }

    {
        String lhs("RETasdfgrFEDwrEGRafdFTRWesdfgrtyWErwtreqieifjirjifjewijiewjifjfweifrifjewijrijjrfijrfijfijfiewjfiwejfreijfifjriewjfiejfiwejfiejiewjfweifjewijeijijigjfiewjiejfifjiejiejfiewjfiejijfiejfiejfeiwjfeijfeifjeiwfjeiwfjeiwfjewifjewijijfejirjirjfirjfirjfiewrjeifjeiewjfiewjfifjiejeifjigirjfirjfirjfirfjirfjirkfijreijfiewfweSDFReTgreFDfgDSAfdgTREwsaFGRteyrewqSDFgreASDFgterERtgrtFRe");
        String rhs("GhfTeRweSDFgrtreRTgfdAWEqQWfijfjfiejfiejijfjfiwjgjerjffiejfirfrijiejrkfjirjfiewjijwiejiefjijrijfeifjifiejfeiwjfiefeifeijfiejfiwejfjweifjiefjewifjeifjeijfeifjewifjewifjeiwfjeiwjfweijfiewfjewifjbnerijERTreqwDFGRsfRtuuefuiewuriewuriewurieurieurieuriurewuriewuriewruiweureiureiruieruieruieureiureirueiruewirueirueiruewirWERfdasREWwrtGFDAfdasREwasdfGRTrewqDFGreTasdfGFSDFdgaFSDf");
        assert(!(lhs == rhs));
    }
     {
        String lhs("RETasdfgrFEDwrEGRafdFTRWejfjeifjeijfejfijwejfjgjwejfiejriejfijweijfreijfiwejqiejejffjejdsjdejfnirfierjeiriejeifjeiwjiejfwiejwiejiejwjfiewfjewijfekjfiewifiwrjifjjweifjiefjiewjeijgringiwjiejrjefiejfiwejfiejjvfewijfjfjefewjjfewijfejifjiefjwejifjjjewijfiewiefjiejejfewijfeifjweijfewjfewifjeiwjfeijfiwefjejeiwfjiefjiewjfewfjeiwjfeijfwejiwiejwiejfjeiwejejwiwjifewjfwejfjffijjfwisdfgrtyWErwtreqweSDFReTgreFDfgDSAfdgTREwsaFGRteyrewqSDFgreASDFgterERtgrtFRe");
        String rhs("GhfTeRweSDFgrtreRTgfdAWEqQWERTrijefjwifjewijfiwejfejwdfkjfsdkfjksdjfksdfjkdsjfjeifjijfiwejiewjewkrjiefjiewjfeiwjgwiejfiwjeifjweiiwrfjejfiewjfiefjweifjeiwfjiewdjfiwefjeqwDFGRsfRtWERfdasREWwrtGFDAfdasREwasdfGRTrewqDFGreTasdfGFSDFdgaFSDf");
        assert(!(lhs == rhs));
    }
     {
        String lhs("jifjiejfiejfiwejfijgskdfjwejifjrkgjijfifjijfijfiwewifjskdjfijiweiejdefjdjfisjfeiuhfhudfhufiefhduhfihiehiufhiwhgriwehdeduhfefRETasdfgrFEDwrEGRfdjvdkfwiieiwjrirfjejsafdFTRWesdfgrtyWErwtreqweSDFReTgreFDfgDSAfdgTREwsaheufefhejfeifjiejfijwefiewjfiwejifewjfiewjifejfiewjfiewjfiejfigifiwejfihgijrirjgrijirfjewifjekfiedjiewjfiwejeifjeijfjefjeijfeijfiefjeiwfiejfiejfijfjffjiwejfiejfeifiejfeijfiwefjiejfijewijfiewijfiewjgiewjiwjifejidijijrjfrideewfjiewjfewifjewjfiewjfiewjfwfjiejfeiwfjewifjwiejfeiifjiwefifjweifjwefFGRteyrewqSDFgreASDFgterERtgrtFRe");
        String rhs("ififjiejfiwejfiewjfiewjijfifjweijfijrjfiaiefjfiewfheiwfhweifehfieffrrfrfewfefeuueiueirueruiueiruewiruieruierueiureiifjieuriewiuewirueiufiweuriuwe9reijiewuej9wekojfkdjfkjfiewfkdjfefjkdjfijfifjwifjiwefGhfTeRweSDFgrtreRTgfdAWEqQWERTiefiefiejfifjijiwefiwejijfifjiewfjiewfjweifeifjiewfjweifefjeifjeijfewifjweifjeijfjefiwefjfjiwefjiwefjiewfjeifjeifjeiwfiewjfiewjiffreqwDFGRsfRtWERfdasREWwrtGFDAfdasREwasdfGRTrewqDFGreTasdfGFSDFdgaFSDf");
        assert(!(lhs == rhs));
    }
    {
        String lhs("jijiiiijfsjijfjirfjisjifidjirfijifrjidfjifirefiifrifdifjiridjfijfdigjijifjriifjirjifjifrwiijfiwjrifjirjfijfijifjrijfirjeifjifjiajfijfijijijfijfijifdjijifdjijirjfijfijijfierjijigjfigjijidjijijifjidfjvifjidjijifjiejfirejiffjvifjijifjiejfiejfiwejfijgskdfjwejifjrkgjijfifjijfijfiwewifjskdjfijiweiejdefjdjfisjfeiuhfhudfhufiefhduhfihiehiufhiwhgriwehdeduhfefRETasdfgrFEDwrEGRfdjvdkfwiieiwjrirfjejsafdFTRWesdfgrtyWErwtreqweSDFReTgreFDfgDSAfdgTREwsaheufefhejfeifjiejfijwefiewjfiwejifewjfiewjifejfiewjfiewjfiejfigifiwejfihgijrirjgrijirfjewifjekfiedjiewjfiwejeifjeijfjefjeijfeijfiefjeiwfiejfiejfijfjffjiwejfiejfeifiejfeijfiwefjiejfijewijfiewijfiewjgiewjiwjifejidijijrjfrideewfjiewjfewifjewjfiewjfiewjfwfjiejfeiwfjewifjwiejfeiifjiwefifjweifjwefFGRteyrewqSDFgreASDFgterERtgrtFRe");
        String rhs("ififjiejfiwejfiewjjjfjsjdnjwanjdnjsnfjdsnjfasnjdnfjjfnwjenjewnrwjenjfnjnfjfnjrfjrnfjsnjnfjnfjrffiewjijfifjweijfijrjfiaiefjfiewfheiwfhweifehfieffrrfrfewfefeuueiueirueruiueiruewiruieruierueiureiifjieuriewiuewirueiufiweuriuwe9reijiewuej9wekojfkdjfkjfiewfkdjfefjkdjfijfifjwifjiwefGhfTeRweSDFgrtreRTgfdAWEqQWERTiefiefiejfifjijiwefiwejijfifjiewfjiewfjweifeifjiewfjweifefjeifjeijfewifjweifjeijfjefiwefjfjiwefjiwefjiewfjeifjeifjeiwfiewjfiewjiffreqwDFGRsfRtWERfdasREWwrtGFDAfdasREwasdfGRTrewqDFGreTasdfGFSDFdgaFSDf");
        assert(!(lhs == rhs));
    }




    std::cout << "Done testing equality operator." << std::endl;
    return 0;
}