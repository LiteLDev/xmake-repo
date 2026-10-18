#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/WYSIWYGState.h"

struct WYSIWIGData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::set<uint>> mActiveControlOptions;
    ::ll::TypedStorage<1, 1, bool>            mOtherConfigsExistInThisCategory;
    ::ll::TypedStorage<4, 4, int>             mNumberOfActiveConfigs;
    ::ll::TypedStorage<4, 4, int>             mNumberOfEnabledConfigs;
    ::ll::TypedStorage<4, 4, ::WYSIWYGState>  mWYSIWYGState;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/WYSIWYGState.h"

struct WYSIWIGData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::set<uint>> mActiveControlOptions;
    ::ll::TypedStorage<1, 1, bool>              mOtherConfigsExistInThisCategory;
    ::ll::TypedStorage<4, 4, int>               mNumberOfActiveConfigs;
    ::ll::TypedStorage<4, 4, int>               mNumberOfEnabledConfigs;
    ::ll::TypedStorage<4, 4, ::WYSIWYGState>    mWYSIWYGState;
    // NOLINTEND
};
#else // @header-generator platform
struct WYSIWIGData {};
#endif // @header-generator platform
#endif // @header-generator platform
