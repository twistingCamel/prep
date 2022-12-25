// clang-format off
#ifndef MACRO_HELPERS_DEF
#define MACRO_HELPERS_DEF
#define toStr(a) " " #a " "
#define bgm(a) "__PG_CMP___" #a "__"
#define bgms(a) "__PG_CMP___" a "__"
#define agm bgm(ARGUMENTS)
#define agmz bgm(ARGUMENTS0)
#define agmn bgm(ARGUMENTS{})
#define expd(a) bgms("EXPAND_" #a)
#define par bgm(PARENTHESES)
// Note: stands for recursive function
// #define rfe(c) REC_FUNC_{0} ## c
#define fe bgm(REC_FN_{0})
#define fe_a bgm(REC_FN_{0}_A)
#define fe_b bgm(REC_FN_{0}_B)
#define fe_c bgm(REC_FN_{0}_C)
#define mcr bgm(MACRO)
#endif // MACRO_HELPERS_DEF
// clang-format on
