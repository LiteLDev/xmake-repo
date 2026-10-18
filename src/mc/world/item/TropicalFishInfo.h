#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TropicalFishInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mColor;
    ::ll::TypedStorage<4, 4, int>          mColor2;
    ::ll::TypedStorage<4, 4, int>          mVariant;
    ::ll::TypedStorage<4, 4, int>          mMarkVariant;
    ::ll::TypedStorage<8, 24, std::string> mName;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>            mColor;
    ::ll::TypedStorage<4, 4, int>            mColor2;
    ::ll::TypedStorage<4, 4, int>            mVariant;
    ::ll::TypedStorage<4, 4, int>            mMarkVariant;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    TropicalFishInfo& operator=(TropicalFishInfo const&);
#else // @header-generator platform
#endif // @header-generator platform
    TropicalFishInfo();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TropicalFishInfo(int color, int color2, int variant, int markVariant, ::std::string name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int color, int color2, int variant, int markVariant, ::std::string name);
    // NOLINTEND
#endif // @header-generator platform
};
