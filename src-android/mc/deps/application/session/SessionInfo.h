#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {
public:
    // SessionInfo inner types define
    using Tags = std::map<std::string, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mSessionId;
    ::ll::TypedStorage<8, 24, std::string>                        mDeviceId;
    ::ll::TypedStorage<8, 24, std::string>                        mBuildId;
    ::ll::TypedStorage<8, 24, std::string>                        mCommitId;
    ::ll::TypedStorage<8, 24, std::string>                        mBranchId;
    ::ll::TypedStorage<8, 24, std::string>                        mFlavor;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mTags;
    ::ll::TypedStorage<8, 8, long>                                mBeginTimestamp;
    ::ll::TypedStorage<8, 8, long>                                mCrashTimestamp;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                 mErrorCode;
    ::ll::TypedStorage<8, 24, std::string>                        mErrorMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getBranchId() const;

    MCNAPI std::string const& getBuildId() const;

    MCNAPI std::string const& getCommitId() const;

    MCNAPI long getCrashTimestamp() const;

    MCNAPI std::optional<uint> const& getErrorCode() const;

    MCNAPI std::string const& getErrorMessage() const;

    MCNAPI std::map<std::string, std::string>& getTags();

    MCNAPI ~SessionInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
