#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

namespace ResourcePackPaths {

struct AllPaths {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    AllPaths& operator=(AllPaths const&);
    AllPaths(AllPaths const&);
    AllPaths();

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
};

} // namespace ResourcePackPaths
