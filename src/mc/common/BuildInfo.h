#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mGameVersion;
    ::ll::TypedStorage<8, 24, std::string> mBuildId;
    ::ll::TypedStorage<8, 24, std::string> mCommitId;
    ::ll::TypedStorage<8, 24, std::string> mBranchId;
    ::ll::TypedStorage<8, 24, std::string> mFlavor;
    ::ll::TypedStorage<8, 24, std::string> mMergeBaseSha;
#else // @header-generator platform
    ::std::string mGameVersion;
    ::std::string mBuildId;
    ::std::string mCommitId;
    ::std::string mBranchId;
    ::std::string mFlavor;
    ::std::string mMergeBaseSha;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BuildInfo();
#else // @header-generator platform
    MCAPI ~BuildInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Common
