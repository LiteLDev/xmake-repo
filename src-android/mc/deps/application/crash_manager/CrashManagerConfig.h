#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ICrashFileApi; }
// clang-format on

namespace Bedrock {

struct CrashManagerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                        mCrashDirName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::ICrashFileApi>> mFileApi;
    ::ll::TypedStorage<1, 1, bool>                                     mLoggingEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CrashManagerConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
