#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

namespace Bedrock::Resources {

struct BakeConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                mSrcPath;
    ::ll::UntypedStorage<1, 24>                                mDstPath;
    ::ll::UntypedStorage<1, 24>                                mLogPath;
    ::ll::TypedStorage<1, 1, bool>                             mNoBinaryOpt;
    ::ll::TypedStorage<1, 1, bool>                             mNoJSONOpt;
    ::ll::TypedStorage<1, 1, bool>                             mNoSentinels;
    ::ll::TypedStorage<1, 1, bool>                             mPilotEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mAssertOnFailure;
    ::ll::TypedStorage<1, 1, bool>                             mVerboseLogging;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mExcludedArchivableNonJsonExtensions;
    // NOLINTEND
};

} // namespace Bedrock::Resources
