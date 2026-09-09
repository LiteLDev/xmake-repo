#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Bedrock {

struct PlatformBuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mInstallerPackageName;
    ::ll::UntypedStorage<8, 24>            mPlatformTempPath;
    ::ll::UntypedStorage<8, 24>            mOnDiskScratchPath;
    ::ll::UntypedStorage<8, 24>            mDataUrl;
    ::ll::UntypedStorage<8, 24>            mAltDataUrl;
    ::ll::TypedStorage<8, 24, std::string> mFeedbackURL;
    ::ll::TypedStorage<1, 1, bool>         mHasBuyButtonWhenLicenseInvalid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlatformBuildInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
