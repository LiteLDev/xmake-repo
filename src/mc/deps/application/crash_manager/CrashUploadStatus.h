#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mStatusMessage;
    ::ll::TypedStorage<8, 24, std::string> mCrashedSessionId;
    ::ll::TypedStorage<8, 24, std::string> mCrashedBuildId;
    ::ll::TypedStorage<8, 24, std::string> mUploadError;
    ::ll::TypedStorage<8, 24, std::string> mUploadURI;
    ::ll::TypedStorage<8, 24, std::string> mCrashFileName;
    ::ll::TypedStorage<8, 8, long>         mCrashTimestamp;
    ::ll::TypedStorage<8, 8, ulong>        mUploadTimeMSec;
    ::ll::TypedStorage<8, 8, ulong>        mFileSizeBytes;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb5c8cc;
    ::ll::UntypedStorage<8, 32> mUnk47bd02;
    ::ll::UntypedStorage<8, 32> mUnk948faf;
    ::ll::UntypedStorage<8, 32> mUnk76224f;
    ::ll::UntypedStorage<8, 32> mUnk3295f6;
    ::ll::UntypedStorage<8, 32> mUnk351e83;
    ::ll::UntypedStorage<8, 8>  mUnkac985e;
    ::ll::UntypedStorage<8, 8>  mUnke83f2e;
    ::ll::UntypedStorage<8, 8>  mUnke1bf8d;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CrashUploadStatus();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    CrashUploadStatus& operator=(CrashUploadStatus const&);
    CrashUploadStatus(CrashUploadStatus const&);
    CrashUploadStatus();
#endif // @header-generator platform
};

} // namespace Bedrock
