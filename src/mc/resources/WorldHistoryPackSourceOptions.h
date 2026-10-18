#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"
#else // @header-generator platform
#endif // @header-generator platform

struct WorldHistoryPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 24>                   mPath;
    ::ll::UntypedStorage<1, 1>                    mType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk43b875;
    ::ll::UntypedStorage<8, 32> mUnk405f3f;
    ::ll::UntypedStorage<1, 1>  mUnkddd3e0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldHistoryPackSourceOptions& operator=(WorldHistoryPackSourceOptions const&);
    WorldHistoryPackSourceOptions(WorldHistoryPackSourceOptions const&);
    WorldHistoryPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldHistoryPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
