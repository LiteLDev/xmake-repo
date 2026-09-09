#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mGameVersion;
    ::ll::TypedStorage<8, 24, std::string> mBuildId;
    ::ll::TypedStorage<8, 24, std::string> mCommitId;
    ::ll::TypedStorage<8, 24, std::string> mBranchId;
    ::ll::TypedStorage<8, 24, std::string> mFlavor;
    ::ll::TypedStorage<8, 24, std::string> mMergeBaseSha;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BuildInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Common
