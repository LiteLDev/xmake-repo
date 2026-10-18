#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, int>          mFrame;
    ::ll::TypedStorage<4, 4, int>          mAtlasTotalFrames;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, int>            mFrame;
    ::ll::TypedStorage<4, 4, int>            mAtlasTotalFrames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemIconInfo& operator=(ItemIconInfo const&);
    ItemIconInfo(ItemIconInfo const&);
#else // @header-generator platform
#endif // @header-generator platform
};
