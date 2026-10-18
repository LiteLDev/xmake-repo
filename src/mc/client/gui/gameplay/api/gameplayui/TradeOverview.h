#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct TradeOverview {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         isExperienceBarVisible;
    ::ll::TypedStorage<4, 4, float>        experienceProgress;
    ::ll::TypedStorage<4, 4, float>        experiencePossibleProgress;
    ::ll::TypedStorage<8, 24, std::string> traderName;
    ::ll::TypedStorage<4, 4, int>          tradeTiers;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TradeOverview {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           isExperienceBarVisible;
    ::ll::TypedStorage<4, 4, float>          experienceProgress;
    ::ll::TypedStorage<4, 4, float>          experiencePossibleProgress;
    ::ll::TypedStorage<8, 32, ::std::string> traderName;
    ::ll::TypedStorage<4, 4, int>            tradeTiers;
    // NOLINTEND
};
#else // @header-generator platform
struct TradeOverview {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
