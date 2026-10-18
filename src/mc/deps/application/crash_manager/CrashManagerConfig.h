#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ICrashFileApi; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct CrashManagerConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>                        mCrashDirName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::ICrashFileApi>> mFileApi;
    ::ll::TypedStorage<1, 1, bool>                                     mLoggingEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkf5faf2;
    ::ll::UntypedStorage<8, 16> mUnk9dd2c9;
    ::ll::UntypedStorage<1, 1>  mUnk48f7d1;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CrashManagerConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    CrashManagerConfig& operator=(CrashManagerConfig const&);
    CrashManagerConfig(CrashManagerConfig const&);
    CrashManagerConfig();
#endif // @header-generator platform
};

} // namespace Bedrock
