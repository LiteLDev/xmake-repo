#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStatusMessage;
    ::ll::TypedStorage<8, 24, std::string> mCrashedSessionId;
    ::ll::TypedStorage<8, 24, std::string> mCrashedBuildId;
    ::ll::TypedStorage<8, 24, std::string> mUploadError;
    ::ll::TypedStorage<8, 24, std::string> mUploadURI;
    ::ll::TypedStorage<8, 24, std::string> mCrashFileName;
    ::ll::TypedStorage<8, 8, long>         mCrashTimestamp;
    ::ll::TypedStorage<8, 8, ulong>        mUploadTimeMSec;
    ::ll::TypedStorage<8, 8, ulong>        mFileSizeBytes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CrashUploadStatus();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
