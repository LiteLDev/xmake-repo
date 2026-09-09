#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/resources/resource_pack_paths/AllPaths.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IResourcePackRepository;
// clang-format on

struct RepositorySourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 312>   mPaths;
    ::ll::UntypedStorage<1, 24>    mOnDiskScratchPath;
    ::ll::UntypedStorage<1, 24>    mOnDiskPackScratchPath;
    ::ll::UntypedStorage<1, 24>    mDevelopmentResourcePacksPath;
    ::ll::UntypedStorage<1, 24>    mDevelopmentBehaviorPacksPath;
    ::ll::UntypedStorage<1, 24>    mDevelopmentSkinPacksPath;
    ::ll::UntypedStorage<1, 24>    mTreatmentPacksPath;
    ::ll::UntypedStorage<1, 24>    mResourcePacksPath;
    ::ll::UntypedStorage<1, 24>    mBehaviorPacksPath;
    ::ll::UntypedStorage<1, 24>    mSystemResourcePacksPath;
    ::ll::UntypedStorage<1, 24>    mSystemBehaviorPacksPath;
    ::ll::TypedStorage<1, 1, bool> mAllowsResourcePackDevelopment;
    ::ll::TypedStorage<1, 1, bool> mSupportsLegacySinglePremiumCacheDirectory;
    ::ll::UntypedStorage<1, 6>     mSaveEncryptedWorldTemplatePacksAsZips;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositorySourceOptions& operator=(RepositorySourceOptions const&);
    RepositorySourceOptions(RepositorySourceOptions const&);
    RepositorySourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RepositorySourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
