#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/resources/resource_pack_paths/AllPaths.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IResourcePackRepository;
// clang-format on

struct RepositorySourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 416> mUnk3b934b;
    ::ll::UntypedStorage<8, 32>  mUnk2c4b26;
    ::ll::UntypedStorage<8, 32>  mUnk70b3c8;
    ::ll::UntypedStorage<8, 32>  mUnka99df8;
    ::ll::UntypedStorage<8, 32>  mUnkeb1eb6;
    ::ll::UntypedStorage<8, 32>  mUnk50876d;
    ::ll::UntypedStorage<8, 32>  mUnk31ab05;
    ::ll::UntypedStorage<8, 32>  mUnk90c9a3;
    ::ll::UntypedStorage<8, 32>  mUnk1299d1;
    ::ll::UntypedStorage<8, 32>  mUnkd449b1;
    ::ll::UntypedStorage<8, 32>  mUnk878ced;
    ::ll::UntypedStorage<1, 1>   mUnk5e06cb;
    ::ll::UntypedStorage<1, 1>   mUnk3d4066;
    ::ll::UntypedStorage<1, 1>   mUnk9bf213;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RepositorySourceOptions& operator=(RepositorySourceOptions const&);
    RepositorySourceOptions(RepositorySourceOptions const&);
    RepositorySourceOptions();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~RepositorySourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::RepositorySourceOptions create(::IResourcePackRepository const& repo, ::AppPlatform& platform);
#endif // @header-generator platform
    // NOLINTEND
};
