#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class LevelCache {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 696>   summary;
    ::ll::UntypedStorage<8, 16>    data;
    ::ll::TypedStorage<1, 1, bool> dirtySummary;
    ::ll::TypedStorage<1, 1, bool> isPartiallyCopied;
    ::ll::TypedStorage<1, 1, bool> isLevelDataInvalid;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 848> mUnk6a83ab;
    ::ll::UntypedStorage<8, 16>  mUnk5b972a;
    ::ll::UntypedStorage<1, 1>   mUnk541c7c;
    ::ll::UntypedStorage<1, 1>   mUnkebaf06;
    ::ll::UntypedStorage<1, 1>   mUnk403190;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCache& operator=(LevelCache const&);
    LevelCache(LevelCache const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    LevelCache();
#endif // @header-generator platform
};
