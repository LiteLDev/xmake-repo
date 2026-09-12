#pragma once

#include <cstdint>

using ushort = unsigned short;
using uint   = unsigned int;
using ulong  = unsigned long;
using llong  = long long;
using ullong = unsigned long long;

using uchar = unsigned char;
using schar = signed char;

using ldouble = long double;

#if defined(LL_PLAT_A)
using int64 = std::int64_t;
#else
using int64 = long long;
#endif
using int32 = int;
using int16 = short;
using int8  = char;

#if defined(LL_PLAT_A)
using uint64 = std::uint64_t;
#else
using uint64 = unsigned long long;
#endif
using uint32 = unsigned int;
using uint16 = unsigned short;
using uint8  = unsigned char;
