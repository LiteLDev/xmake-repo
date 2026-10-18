#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/level/storage/Experiments.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PackLoadInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>   mPackId;
    ::ll::TypedStorage<8, 56, ::Experiments> mExperiments;
    ::ll::TypedStorage<1, 1, bool>           mIsTrustedPack;
    ::ll::TypedStorage<1, 1, bool>           mIsBaseGamePack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka08bbb;
    ::ll::UntypedStorage<8, 72> mUnk7c9f80;
    ::ll::UntypedStorage<1, 1>  mUnk9c7297;
    ::ll::UntypedStorage<1, 1>  mUnk2b2ceb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadInfo& operator=(PackLoadInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackLoadInfo(PackLoadInfo const&);
#endif // @header-generator platform
    PackLoadInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackLoadInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
