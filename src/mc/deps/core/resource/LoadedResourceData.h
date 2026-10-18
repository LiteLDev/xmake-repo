#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedResourceData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mIndex;
    ::ll::TypedStorage<8, 24, std::string> mContent;
    ::ll::TypedStorage<1, 1, bool>         mIsBaseGamePack;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk3cf435;
    ::ll::UntypedStorage<8, 32> mUnk336365;
    ::ll::UntypedStorage<1, 1>  mUnkfc66b1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LoadedResourceData& operator=(LoadedResourceData const&);
    LoadedResourceData(LoadedResourceData const&);
    LoadedResourceData();
};
