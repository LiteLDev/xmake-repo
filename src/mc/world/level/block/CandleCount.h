#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CandleCount : int {
#if defined(LL_PLAT_A) // @header-generator platform
    One_Candle    = 0,
    Two_Candles   = 1,
    Three_Candles = 2,
    Four_Candles  = 3,
    _count        = 4,
#else // @header-generator platform
    OneCandle    = 0,
    TwoCandles   = 1,
    ThreeCandles = 2,
    FourCandles  = 3,
    Count        = 4,
#endif // @header-generator platform
};
