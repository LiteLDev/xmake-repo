#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ResourcePackPaths {

struct AllPaths {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24> mPremiumPackPath;
    ::ll::UntypedStorage<1, 24> mPremiumWorldTemplatePath;
    ::ll::UntypedStorage<1, 24> mGlobalResourcePacksPath;
    ::ll::UntypedStorage<1, 24> mPremiumBehaviorPackPath;
    ::ll::UntypedStorage<1, 24> mPremiumResourcePackPath;
    ::ll::UntypedStorage<1, 24> mPremiumSkinPackPath;
    ::ll::UntypedStorage<1, 24> mCachedResourcePacksPath;
    ::ll::UntypedStorage<1, 24> mCachedBehaviorPacksPath;
    ::ll::UntypedStorage<1, 24> mTemporaryPremiumResourcePacksPath;
    ::ll::UntypedStorage<1, 24> mTemporaryPremiumBehaviorPacksPath;
    ::ll::UntypedStorage<1, 24> mSystemServicePacksPath;
    ::ll::UntypedStorage<1, 24> mSystemResourcePacksPath;
    ::ll::UntypedStorage<1, 24> mSystemBehaviorPacksPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk2e2086;
    ::ll::UntypedStorage<8, 32> mUnk1139bd;
    ::ll::UntypedStorage<8, 32> mUnk39ece9;
    ::ll::UntypedStorage<8, 32> mUnk8107af;
    ::ll::UntypedStorage<8, 32> mUnkdb8418;
    ::ll::UntypedStorage<8, 32> mUnkb4d325;
    ::ll::UntypedStorage<8, 32> mUnkfac66e;
    ::ll::UntypedStorage<8, 32> mUnk686ef9;
    ::ll::UntypedStorage<8, 32> mUnka7453e;
    ::ll::UntypedStorage<8, 32> mUnk98ca8e;
    ::ll::UntypedStorage<8, 32> mUnka4f4d6;
    ::ll::UntypedStorage<8, 32> mUnk5e3ccc;
    ::ll::UntypedStorage<8, 32> mUnk86a380;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AllPaths& operator=(AllPaths const&);
    AllPaths(AllPaths const&);
    AllPaths();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AllPaths();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ResourcePackPaths
