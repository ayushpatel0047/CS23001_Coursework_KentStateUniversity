#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("n!xOkZC6#-(WZ?kf4ZP2qrq==srUn1>r1h*jqR_+trMKO6h4nd2NntOHzr5i8&uz_6UcRCQdGUJ=dxNY_X$fJ=hk9!QjT8lZbUIK0xl>@LJ9k-HhC0H_v6gm>qg-QzL75pHh!OTT0)DPGDA4^VklxeU>^he)5D5qLy)9J5ZDJwrQE1UbSEBKITd4>tLi+@yeheY(@<G^YHOIsopJgphkK^yzk05iFPUUlbvRVR+p5l^+=wzz#t<YQT!sDG620AvuQGmM%=>I+29yHCAv#2cNfTH$hh?p)3*r-nCwu8hARhcC");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "n!xOkZC6#-(WZ?kf4ZP2qrq==srUn1>r1h*jqR_+trMKO6h4nd2NntOHzr5i8&uz_6UcRCQdGUJ=dxNY_X$fJ=hk9!QjT8lZbUIK0xl>@LJ9k-HhC0H_v6gm>qg-QzL75pHh!OTT0)DPGDA4^VklxeU>^he)5D5qLy)9J5ZDJwrQE1UbSEBKITd4>tLi+@yeheY(@<G^YHOIsopJgphkK^yzk05iFPUUlbvRVR+p5l^+=wzz#t<YQT!sDG620AvuQGmM%=>I+29yHCAv#2cNfTH$hh?p)3*r-nCwu8hARhcC");
        assert(cpy == "n!xOkZC6#-(WZ?kf4ZP2qrq==srUn1>r1h*jqR_+trMKO6h4nd2NntOHzr5i8&uz_6UcRCQdGUJ=dxNY_X$fJ=hk9!QjT8lZbUIK0xl>@LJ9k-HhC0H_v6gm>qg-QzL75pHh!OTT0)DPGDA4^VklxeU>^he)5D5qLy)9J5ZDJwrQE1UbSEBKITd4>tLi+@yeheY(@<G^YHOIsopJgphkK^yzk05iFPUUlbvRVR+p5l^+=wzz#t<YQT!sDG620AvuQGmM%=>I+29yHCAv#2cNfTH$hh?p)3*r-nCwu8hARhcC");
    }

     { //------------------------------------------------------
        // SETUP FIXTURE
        String  str("+#z8kJBzvO>(FQ8Tra+uvt@$QxZRcJ+@WFeovKW)Y%y=heOeQOiRxvM@CuP6z<Qe7cfdvcQtiBx>)1H30hrrPc7I3EtNv+2v2_7lMwrpo>3tDW+Ll_p4s2K=wZd(KI#TQstw>@+PCqHY9=8sf@33g6HqJzc<J7_eKLqfZgm7bzf&N%k+QE5L&LKIR4!w=eiMRkTS0sHEGjd$-9l^-*dh52>fg$@sIYupyQvPg-BUxNA=9Rv$p*4Kp>XxcgEsr)B##1z(=xAYo11q^d!UySV>oTs#uBAIn9iJxgk8Hfm_^cq");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "+#z8kJBzvO>(FQ8Tra+uvt@$QxZRcJ+@WFeovKW)Y%y=heOeQOiRxvM@CuP6z<Qe7cfdvcQtiBx>)1H30hrrPc7I3EtNv+2v2_7lMwrpo>3tDW+Ll_p4s2K=wZd(KI#TQstw>@+PCqHY9=8sf@33g6HqJzc<J7_eKLqfZgm7bzf&N%k+QE5L&LKIR4!w=eiMRkTS0sHEGjd$-9l^-*dh52>fg$@sIYupyQvPg-BUxNA=9Rv$p*4Kp>XxcgEsr)B##1z(=xAYo11q^d!UySV>oTs#uBAIn9iJxgk8Hfm_^cq");
        assert(cpy == "+#z8kJBzvO>(FQ8Tra+uvt@$QxZRcJ+@WFeovKW)Y%y=heOeQOiRxvM@CuP6z<Qe7cfdvcQtiBx>)1H30hrrPc7I3EtNv+2v2_7lMwrpo>3tDW+Ll_p4s2K=wZd(KI#TQstw>@+PCqHY9=8sf@33g6HqJzc<J7_eKLqfZgm7bzf&N%k+QE5L&LKIR4!w=eiMRkTS0sHEGjd$-9l^-*dh52>fg$@sIYupyQvPg-BUxNA=9Rv$p*4Kp>XxcgEsr)B##1z(=xAYo11q^d!UySV>oTs#uBAIn9iJxgk8Hfm_^cq");
    }
    { //------------------------------------------------------
        // SETUP FIXTURE
        String  str("8_q#Z%Agx9jeSx0^<8=h9e>fuW*^ZxXi^aFaOmFl3a31%@ICOJd=_%C*LzTC!=DehqCwi^ATpoD&ZEswVztq)<K%crXNj652&wcK4F-t3q0T3emPlw$IdjCL%IEWh3w=YZwADS)U^X*bL3Tir<whsZdo-pRlNddA4*<qK5LpMUd1uNxf?F)l-!rMh5A?#_m<$bu%43hily$46DI7bqb*!(5wh+I=tqVF7LPPdlttiQg08uj=a25cmVv3s*-ABW2lF!h5QwF+?1gWk->#pcRoI7uxnGan&9*qTDsk5r$3Lw5G");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "8_q#Z%Agx9jeSx0^<8=h9e>fuW*^ZxXi^aFaOmFl3a31%@ICOJd=_%C*LzTC!=DehqCwi^ATpoD&ZEswVztq)<K%crXNj652&wcK4F-t3q0T3emPlw$IdjCL%IEWh3w=YZwADS)U^X*bL3Tir<whsZdo-pRlNddA4*<qK5LpMUd1uNxf?F)l-!rMh5A?#_m<$bu%43hily$46DI7bqb*!(5wh+I=tqVF7LPPdlttiQg08uj=a25cmVv3s*-ABW2lF!h5QwF+?1gWk->#pcRoI7uxnGan&9*qTDsk5r$3Lw5G");
        assert(cpy == "8_q#Z%Agx9jeSx0^<8=h9e>fuW*^ZxXi^aFaOmFl3a31%@ICOJd=_%C*LzTC!=DehqCwi^ATpoD&ZEswVztq)<K%crXNj652&wcK4F-t3q0T3emPlw$IdjCL%IEWh3w=YZwADS)U^X*bL3Tir<whsZdo-pRlNddA4*<qK5LpMUd1uNxf?F)l-!rMh5A?#_m<$bu%43hily$46DI7bqb*!(5wh+I=tqVF7LPPdlttiQg08uj=a25cmVv3s*-ABW2lF!h5QwF+?1gWk->#pcRoI7uxnGan&9*qTDsk5r$3Lw5G");
    }
    { //------------------------------------------------------
        // SETUP FIXTURE
        String  str("h*B>r8MCOo5NYy_<O(?ggU7n+*G3n)uE1If89gxqVtcxvYyx*cIy!rYeI9zp(-aA6<ym57xqJaUmrDs!K)h^rkFCS<pwh)Rtq&aPea*TQ+8m32#GonfbEr4cT1YPkP$=+H*vNkSczjdmU<IL^N*qiTo_nWy^+<FVpOl0nv$l2bmf8l13iBLHbDBaq@abksCsPKX)!-g5H@ozdXHVra4Ksz&Vdr0c3gvVb>d*WN7ZB5?=@NKl>AUeK0gVPtXcx(6ZP&i$rwyMGmBRl>l8i8o^1Ws0RyZAi_E0P+EsdvQ_U1ps");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "h*B>r8MCOo5NYy_<O(?ggU7n+*G3n)uE1If89gxqVtcxvYyx*cIy!rYeI9zp(-aA6<ym57xqJaUmrDs!K)h^rkFCS<pwh)Rtq&aPea*TQ+8m32#GonfbEr4cT1YPkP$=+H*vNkSczjdmU<IL^N*qiTo_nWy^+<FVpOl0nv$l2bmf8l13iBLHbDBaq@abksCsPKX)!-g5H@ozdXHVra4Ksz&Vdr0c3gvVb>d*WN7ZB5?=@NKl>AUeK0gVPtXcx(6ZP&i$rwyMGmBRl>l8i8o^1Ws0RyZAi_E0P+EsdvQ_U1ps");
        assert(cpy == "h*B>r8MCOo5NYy_<O(?ggU7n+*G3n)uE1If89gxqVtcxvYyx*cIy!rYeI9zp(-aA6<ym57xqJaUmrDs!K)h^rkFCS<pwh)Rtq&aPea*TQ+8m32#GonfbEr4cT1YPkP$=+H*vNkSczjdmU<IL^N*qiTo_nWy^+<FVpOl0nv$l2bmf8l13iBLHbDBaq@abksCsPKX)!-g5H@ozdXHVra4Ksz&Vdr0c3gvVb>d*WN7ZB5?=@NKl>AUeK0gVPtXcx(6ZP&i$rwyMGmBRl>l8i8o^1Ws0RyZAi_E0P+EsdvQ_U1ps");
    }

{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("5t#H1f8-fpyT#(>I(TUJ&CZhY5YAIj+CytE+H@PBb-?C7hvO)8P-b8Rk#SOlbt4C0ChBB9^ZNFW98ZpIblhGrk!VehD8YSllLy&1M56hq+@d5GAL1ZQN64@3eg>L64$qe-J45E&1K2zaxgMnw!-O^yp2kWuFaUG7!JChDP6(K01Nz9UvF8>!@s$^Qold@V+X$4Uz!uN6aC*#T3ZupwWr9biFl1@M$l^!Qusaup2Gz?>3&j0n_&1oR+(l<6V=2^<>-JyFPL<>v!#(&Pwr+Fsr6KDVfzOz5VW*&p=tQs3Jf@b<");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "5t#H1f8-fpyT#(>I(TUJ&CZhY5YAIj+CytE+H@PBb-?C7hvO)8P-b8Rk#SOlbt4C0ChBB9^ZNFW98ZpIblhGrk!VehD8YSllLy&1M56hq+@d5GAL1ZQN64@3eg>L64$qe-J45E&1K2zaxgMnw!-O^yp2kWuFaUG7!JChDP6(K01Nz9UvF8>!@s$^Qold@V+X$4Uz!uN6aC*#T3ZupwWr9biFl1@M$l^!Qusaup2Gz?>3&j0n_&1oR+(l<6V=2^<>-JyFPL<>v!#(&Pwr+Fsr6KDVfzOz5VW*&p=tQs3Jf@b<");
        assert(cpy == "5t#H1f8-fpyT#(>I(TUJ&CZhY5YAIj+CytE+H@PBb-?C7hvO)8P-b8Rk#SOlbt4C0ChBB9^ZNFW98ZpIblhGrk!VehD8YSllLy&1M56hq+@d5GAL1ZQN64@3eg>L64$qe-J45E&1K2zaxgMnw!-O^yp2kWuFaUG7!JChDP6(K01Nz9UvF8>!@s$^Qold@V+X$4Uz!uN6aC*#T3ZupwWr9biFl1@M$l^!Qusaup2Gz?>3&j0n_&1oR+(l<6V=2^<>-JyFPL<>v!#(&Pwr+Fsr6KDVfzOz5VW*&p=tQs3Jf@b<");
    }

{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("NzFWuum-I9R&ue$c<B0?gSa6AhQDNEGi8D#2OI64i2Ij2EJS5rMkVTP_rhJ+n5*)C?wi&<FUZ-+qKZ=<C^DE*BRB<>asapn#laS3fWNG3AYs=y8uL<JrO@K^)L_laHzey$Re)Nd6z)OQq8JO9=-=k&X^9BM(@5s1qZO8$H#+Wf9>hFc$fTRQ0Z=dZWwRGVNkB*Dwa4u1UY3anSdv@H&F(vZUA&VrIoBZgmft)wai1QCerug5Fx+sAa*pm3yvL9ZQE3$4Wu#Pr?n0Y520SjQpcFMhR4nHWH0aTsi#JZz3+Q=K");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "NzFWuum-I9R&ue$c<B0?gSa6AhQDNEGi8D#2OI64i2Ij2EJS5rMkVTP_rhJ+n5*)C?wi&<FUZ-+qKZ=<C^DE*BRB<>asapn#laS3fWNG3AYs=y8uL<JrO@K^)L_laHzey$Re)Nd6z)OQq8JO9=-=k&X^9BM(@5s1qZO8$H#+Wf9>hFc$fTRQ0Z=dZWwRGVNkB*Dwa4u1UY3anSdv@H&F(vZUA&VrIoBZgmft)wai1QCerug5Fx+sAa*pm3yvL9ZQE3$4Wu#Pr?n0Y520SjQpcFMhR4nHWH0aTsi#JZz3+Q=K");
        assert(cpy == "NzFWuum-I9R&ue$c<B0?gSa6AhQDNEGi8D#2OI64i2Ij2EJS5rMkVTP_rhJ+n5*)C?wi&<FUZ-+qKZ=<C^DE*BRB<>asapn#laS3fWNG3AYs=y8uL<JrO@K^)L_laHzey$Re)Nd6z)OQq8JO9=-=k&X^9BM(@5s1qZO8$H#+Wf9>hFc$fTRQ0Z=dZWwRGVNkB*Dwa4u1UY3anSdv@H&F(vZUA&VrIoBZgmft)wai1QCerug5Fx+sAa*pm3yvL9ZQE3$4Wu#Pr?n0Y520SjQpcFMhR4nHWH0aTsi#JZz3+Q=K");
    }

{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("6HIOIZrH&^V2VYIdKWe0Vou5mGKA9*kbYsW945kPbrfbdqYzERE2GLG!H0y^TzJ+#<Y__KpLJ+K?71vCc$ktkz_uJfPAngy2)m5u4J8SG!QY33QK2DT((=8yn*Z5@$-KZXKG-9B!K^XD_q#kjrp-fS1Jv$v843c!aK_v>7u>S#6SXDUqg2vHWIwGFza#6Dj^I>re$4SAX)UQzBocyk9OfubA)U0jP)zXE+2rSKPA3CX^)#WrJoCvMW8eBJ1*zvlP=CpowS!rt2JITXOSGFQ@mRWkPRKpXfV-xv#i=7m_efWg");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "6HIOIZrH&^V2VYIdKWe0Vou5mGKA9*kbYsW945kPbrfbdqYzERE2GLG!H0y^TzJ+#<Y__KpLJ+K?71vCc$ktkz_uJfPAngy2)m5u4J8SG!QY33QK2DT((=8yn*Z5@$-KZXKG-9B!K^XD_q#kjrp-fS1Jv$v843c!aK_v>7u>S#6SXDUqg2vHWIwGFza#6Dj^I>re$4SAX)UQzBocyk9OfubA)U0jP)zXE+2rSKPA3CX^)#WrJoCvMW8eBJ1*zvlP=CpowS!rt2JITXOSGFQ@mRWkPRKpXfV-xv#i=7m_efWg");
        assert(cpy == "6HIOIZrH&^V2VYIdKWe0Vou5mGKA9*kbYsW945kPbrfbdqYzERE2GLG!H0y^TzJ+#<Y__KpLJ+K?71vCc$ktkz_uJfPAngy2)m5u4J8SG!QY33QK2DT((=8yn*Z5@$-KZXKG-9B!K^XD_q#kjrp-fS1Jv$v843c!aK_v>7u>S#6SXDUqg2vHWIwGFza#6Dj^I>re$4SAX)UQzBocyk9OfubA)U0jP)zXE+2rSKPA3CX^)#WrJoCvMW8eBJ1*zvlP=CpowS!rt2JITXOSGFQ@mRWkPRKpXfV-xv#i=7m_efWg");
    }

{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("6HIOIZrH&^V2VYIdKWe0Vou5mGKA9*kbYsW945kPbrfbdqYzERE2GLG!H0y^TzJ+#<Y__KpLJ+K?71vCc$ktkz_uJfPAngy2)m5u4J8SG!QY33QK2DT((=8yn*Z5@$-KZXKG-9B!K^XD_q#kjrp-fS1Jv$v843c!aK_v>7u>S#6SXDUqg2vHWIwGFza#6Dj^I>re$4SAX)UQzBocyk9OfubA)U0jP)zXE+2rSKPA3CX^)#WrJoCvMW8eBJ1*zvlP=CpowS!rt2JITXOSGFQ@mRWkPRKpXfV-xv#i=7m_efWg");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "6HIOIZrH&^V2VYIdKWe0Vou5mGKA9*kbYsW945kPbrfbdqYzERE2GLG!H0y^TzJ+#<Y__KpLJ+K?71vCc$ktkz_uJfPAngy2)m5u4J8SG!QY33QK2DT((=8yn*Z5@$-KZXKG-9B!K^XD_q#kjrp-fS1Jv$v843c!aK_v>7u>S#6SXDUqg2vHWIwGFza#6Dj^I>re$4SAX)UQzBocyk9OfubA)U0jP)zXE+2rSKPA3CX^)#WrJoCvMW8eBJ1*zvlP=CpowS!rt2JITXOSGFQ@mRWkPRKpXfV-xv#i=7m_efWg");
        assert(cpy == "6HIOIZrH&^V2VYIdKWe0Vou5mGKA9*kbYsW945kPbrfbdqYzERE2GLG!H0y^TzJ+#<Y__KpLJ+K?71vCc$ktkz_uJfPAngy2)m5u4J8SG!QY33QK2DT((=8yn*Z5@$-KZXKG-9B!K^XD_q#kjrp-fS1Jv$v843c!aK_v>7u>S#6SXDUqg2vHWIwGFza#6Dj^I>re$4SAX)UQzBocyk9OfubA)U0jP)zXE+2rSKPA3CX^)#WrJoCvMW8eBJ1*zvlP=CpowS!rt2JITXOSGFQ@mRWkPRKpXfV-xv#i=7m_efWg");
    }
{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("A0pCfy?G6+EhEyZDNgZfWR7-$Iww3&3qxtih)EB5oRxo!cu2dcmCyejT(mSKU>8frrGe*$Zqq4XxP?occT&3cJ9Oxvk#m8h4R$eEUvo?)7o=RH2+FM^?eP7KEnkh&P+)f_o1j5Q&MpvVAEgi4c8uGguogy^Oh^XW)yfsiSSTv3sxreH4yWr>0H8H=7UwX-36L5v!08E7bVh70fm=@sNIDc5<9kKelR?>e9?So04tuX_@hF2axI3Ho!y9Ggv7B026Ght?SGR36kTsXW0DPP(R1Yv0rHfEV&&<o@#HsAPr4*O1");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "A0pCfy?G6+EhEyZDNgZfWR7-$Iww3&3qxtih)EB5oRxo!cu2dcmCyejT(mSKU>8frrGe*$Zqq4XxP?occT&3cJ9Oxvk#m8h4R$eEUvo?)7o=RH2+FM^?eP7KEnkh&P+)f_o1j5Q&MpvVAEgi4c8uGguogy^Oh^XW)yfsiSSTv3sxreH4yWr>0H8H=7UwX-36L5v!08E7bVh70fm=@sNIDc5<9kKelR?>e9?So04tuX_@hF2axI3Ho!y9Ggv7B026Ght?SGR36kTsXW0DPP(R1Yv0rHfEV&&<o@#HsAPr4*O1");
        assert(cpy == "A0pCfy?G6+EhEyZDNgZfWR7-$Iww3&3qxtih)EB5oRxo!cu2dcmCyejT(mSKU>8frrGe*$Zqq4XxP?occT&3cJ9Oxvk#m8h4R$eEUvo?)7o=RH2+FM^?eP7KEnkh&P+)f_o1j5Q&MpvVAEgi4c8uGguogy^Oh^XW)yfsiSSTv3sxreH4yWr>0H8H=7UwX-36L5v!08E7bVh70fm=@sNIDc5<9kKelR?>e9?So04tuX_@hF2axI3Ho!y9Ggv7B026Ght?SGR36kTsXW0DPP(R1Yv0rHfEV&&<o@#HsAPr4*O1");
    }
{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("gg*&W5p&xEO6AZLHWFAbgjv!V+vx!M+DLrg9!6aFj=6XkOcuCT?CT@Rrd8(*dKt0$A9r_08jbAh33fcQna7Snhcj76O-b4Sd?y*4Y1=<&s9L-MhLF>d$50v*)Em>B^n)x07T34QcTRmNTc=9jI#Elxlvnl00dr#g#!6I^hUQXP^+uSn8q5jtjL71_s=OKADKFKPM6pmwUXpqQRbCuFk8TBAhJI(gq$P#T!0NBp6H*vR=<&MfdBrl65Ss7lPrzB29-XiGUm#-Cg<s+9L0Q7?IAd*3$?l6^+imAk4WhdIe?Ih&");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "gg*&W5p&xEO6AZLHWFAbgjv!V+vx!M+DLrg9!6aFj=6XkOcuCT?CT@Rrd8(*dKt0$A9r_08jbAh33fcQna7Snhcj76O-b4Sd?y*4Y1=<&s9L-MhLF>d$50v*)Em>B^n)x07T34QcTRmNTc=9jI#Elxlvnl00dr#g#!6I^hUQXP^+uSn8q5jtjL71_s=OKADKFKPM6pmwUXpqQRbCuFk8TBAhJI(gq$P#T!0NBp6H*vR=<&MfdBrl65Ss7lPrzB29-XiGUm#-Cg<s+9L0Q7?IAd*3$?l6^+imAk4WhdIe?Ih&");
        assert(cpy == "gg*&W5p&xEO6AZLHWFAbgjv!V+vx!M+DLrg9!6aFj=6XkOcuCT?CT@Rrd8(*dKt0$A9r_08jbAh33fcQna7Snhcj76O-b4Sd?y*4Y1=<&s9L-MhLF>d$50v*)Em>B^n)x07T34QcTRmNTc=9jI#Elxlvnl00dr#g#!6I^hUQXP^+uSn8q5jtjL71_s=OKADKFKPM6pmwUXpqQRbCuFk8TBAhJI(gq$P#T!0NBp6H*vR=<&MfdBrl65Ss7lPrzB29-XiGUm#-Cg<s+9L0Q7?IAd*3$?l6^+imAk4WhdIe?Ih&");
    }
{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("V5JynuoDu#*4#UNupuPM2hFYROgLm6iz73=BPO8En4cLXj#A19GP2q&ATxH24_bRSlq7a-E2KbDL=^7L)$r#ZtVvfaDqgay>dc(3K8C3rb!3gpz2eIGm_sf4!*V4LQ*u&8E)xb<VBS)=-IVV*$rGon-P>Q9l(OMjS7zPTXkQ<0$WhqXb84tjEaZOF#O_4UzXGg5B4UA5?8WqJ=&5+xTX7-TOac$GWt$&bYD9m&iFHv^M1SJC_^r*yR5^5fSqi3MR5T180Iu&@lR5a_shMcXHQ^@QWQH5AO853-*xaLw?q3r0");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "V5JynuoDu#*4#UNupuPM2hFYROgLm6iz73=BPO8En4cLXj#A19GP2q&ATxH24_bRSlq7a-E2KbDL=^7L)$r#ZtVvfaDqgay>dc(3K8C3rb!3gpz2eIGm_sf4!*V4LQ*u&8E)xb<VBS)=-IVV*$rGon-P>Q9l(OMjS7zPTXkQ<0$WhqXb84tjEaZOF#O_4UzXGg5B4UA5?8WqJ=&5+xTX7-TOac$GWt$&bYD9m&iFHv^M1SJC_^r*yR5^5fSqi3MR5T180Iu&@lR5a_shMcXHQ^@QWQH5AO853-*xaLw?q3r0");
        assert(cpy == "V5JynuoDu#*4#UNupuPM2hFYROgLm6iz73=BPO8En4cLXj#A19GP2q&ATxH24_bRSlq7a-E2KbDL=^7L)$r#ZtVvfaDqgay>dc(3K8C3rb!3gpz2eIGm_sf4!*V4LQ*u&8E)xb<VBS)=-IVV*$rGon-P>Q9l(OMjS7zPTXkQ<0$WhqXb84tjEaZOF#O_4UzXGg5B4UA5?8WqJ=&5+xTX7-TOac$GWt$&bYD9m&iFHv^M1SJC_^r*yR5^5fSqi3MR5T180Iu&@lR5a_shMcXHQ^@QWQH5AO853-*xaLw?q3r0");
    }
{ //------------------------------------------------------
        // SETUP FIXTURE
        String  str("OCKgwVMfql$o&vCF6T7(q0hLM9rKIhu#2i52ymBERdD)71K!<x65z!aTBiWp0F#)+!NbWV0=b35MX7Hs@_W4VQg2(x<Lu_X_=4)8=>01VFTkcr(zrvN+KF1zxM_yyzVC<jj)1s#cdZ@zAKrUm+_V)TIp?PVa_j?7mw?V*(PkmpnS1_ym>D=Z())GNjZ-yc!ayZ^ERrs)*tZcjbh8Lsvjzw?u<>NXw0GR0#U3!3-Q!a8vtXxcuxctLN)SEJwa@#=J=&tFF+_gG@T^GW^MO3oT9VgNFgv2=(rGf4HVKJoQm@m5");
        // TEST
        String  cpy(str);

        // VERIFY
        assert(cpy == str);
        assert(str == "OCKgwVMfql$o&vCF6T7(q0hLM9rKIhu#2i52ymBERdD)71K!<x65z!aTBiWp0F#)+!NbWV0=b35MX7Hs@_W4VQg2(x<Lu_X_=4)8=>01VFTkcr(zrvN+KF1zxM_yyzVC<jj)1s#cdZ@zAKrUm+_V)TIp?PVa_j?7mw?V*(PkmpnS1_ym>D=Z())GNjZ-yc!ayZ^ERrs)*tZcjbh8Lsvjzw?u<>NXw0GR0#U3!3-Q!a8vtXxcuxctLN)SEJwa@#=J=&tFF+_gG@T^GW^MO3oT9VgNFgv2=(rGf4HVKJoQm@m5");
        assert(cpy == "OCKgwVMfql$o&vCF6T7(q0hLM9rKIhu#2i52ymBERdD)71K!<x65z!aTBiWp0F#)+!NbWV0=b35MX7Hs@_W4VQg2(x<Lu_X_=4)8=>01VFTkcr(zrvN+KF1zxM_yyzVC<jj)1s#cdZ@zAKrUm+_V)TIp?PVa_j?7mw?V*(PkmpnS1_ym>D=Z())GNjZ-yc!ayZ^ERrs)*tZcjbh8Lsvjzw?u<>NXw0GR0#U3!3-Q!a8vtXxcuxctLN)SEJwa@#=J=&tFF+_gG@T^GW^MO3oT9VgNFgv2=(rGf4HVKJoQm@m5");
    }
 std::cout << "Done testing copy." << std::endl;
    return 0;

}