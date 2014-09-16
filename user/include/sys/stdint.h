//http://www.opensource.apple.com/source/gm4/gm4-15/lib/stdint_.h
//http://fxr.watson.org/fxr/source/sys/stdint.h?v=OPENBSD
#define intmax_t long long int
#define uintmax_t unsigned long int


#define INT64_MIN               (-0x7fffffffffffffffLL - 1)
#define INTMAX_MIN              INT64_MIN

#define INT64_MAX               0x7fffffffffffffffLL
#define INTMAX_MAX              INT64_MAX
