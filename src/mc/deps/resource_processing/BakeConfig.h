#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Resources {

struct BakeConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf5ab44;
    ::ll::UntypedStorage<8, 32> mUnk4fbb72;
    ::ll::UntypedStorage<8, 32> mUnk1f1f39;
    ::ll::UntypedStorage<1, 1>  mUnkd25c0d;
    ::ll::UntypedStorage<1, 1>  mUnk5cdb09;
    ::ll::UntypedStorage<1, 1>  mUnke77cce;
    ::ll::UntypedStorage<1, 1>  mUnk29733e;
    ::ll::UntypedStorage<1, 1>  mUnkf4a897;
    ::ll::UntypedStorage<1, 1>  mUnkd17af5;
    ::ll::UntypedStorage<8, 64> mUnk291dd0;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeConfig& operator=(BakeConfig const&);
    BakeConfig(BakeConfig const&);
    BakeConfig();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~BakeConfig();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
