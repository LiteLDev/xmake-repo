#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStorageEventingContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCreationReason;
    ::ll::TypedStorage<8, 24, std::string> mLevelId;
    ::ll::TypedStorage<1, 1, bool>         mIsFromWorldTemplate;
    ::ll::TypedStorage<4, 4, uint>         mWorldStartCount;
    ::ll::TypedStorage<8, 24, std::string> mLastOpenedWithVersion;
    ::ll::TypedStorage<8, 8, long>         mLastSavedTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mCreationReason;
    ::ll::TypedStorage<8, 32, ::std::string> mLevelId;
    ::ll::TypedStorage<1, 1, bool>           mIsFromWorldTemplate;
    ::ll::TypedStorage<4, 4, uint>           mWorldStartCount;
    ::ll::TypedStorage<8, 32, ::std::string> mLastOpenedWithVersion;
    ::ll::TypedStorage<8, 8, int64>          mLastSavedTime;
#endif // @header-generator platform
    // NOLINTEND
};
