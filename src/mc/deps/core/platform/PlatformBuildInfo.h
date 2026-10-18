#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct PlatformBuildInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mInstallerPackageName;
    ::ll::UntypedStorage<8, 24>            mPlatformTempPath;
    ::ll::UntypedStorage<8, 24>            mOnDiskScratchPath;
    ::ll::UntypedStorage<8, 24>            mDataUrl;
    ::ll::UntypedStorage<8, 24>            mAltDataUrl;
    ::ll::TypedStorage<8, 24, std::string> mFeedbackURL;
    ::ll::TypedStorage<1, 1, bool>         mHasBuyButtonWhenLicenseInvalid;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk91bfc1;
    ::ll::UntypedStorage<8, 32> mUnk9fc24e;
    ::ll::UntypedStorage<8, 32> mUnk2feb4d;
    ::ll::UntypedStorage<8, 32> mUnk4636d8;
    ::ll::UntypedStorage<8, 32> mUnk4a17cb;
    ::ll::UntypedStorage<8, 32> mUnke61579;
    ::ll::UntypedStorage<1, 1>  mUnk5b333f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlatformBuildInfo& operator=(PlatformBuildInfo const&);
    PlatformBuildInfo(PlatformBuildInfo const&);
    PlatformBuildInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlatformBuildInfo();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~PlatformBuildInfo();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
