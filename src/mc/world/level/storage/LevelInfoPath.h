#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/storage/LevelDataLoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform

struct LevelInfoPath {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                     mPath;
    ::ll::TypedStorage<4, 4, ::LevelDataLoadResult> mDataAvailability;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk28129f;
    ::ll::UntypedStorage<4, 4>  mUnkb32869;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LevelInfoPath& operator=(LevelInfoPath const&);
    LevelInfoPath(LevelInfoPath const&);
    LevelInfoPath();
#endif // @header-generator platform
};
