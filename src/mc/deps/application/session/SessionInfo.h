#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SessionInfo inner types define
    using Tags = std::map<std::string, std::string>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk80d1c0;
    ::ll::UntypedStorage<8, 32> mUnk645e34;
    ::ll::UntypedStorage<8, 32> mUnkdcdfd2;
    ::ll::UntypedStorage<8, 32> mUnkbc1fbb;
    ::ll::UntypedStorage<8, 32> mUnkffff9d;
    ::ll::UntypedStorage<8, 32> mUnkb92fea;
    ::ll::UntypedStorage<8, 16> mUnk296a2f;
    ::ll::UntypedStorage<8, 8>  mUnk519224;
    ::ll::UntypedStorage<8, 8>  mUnk6a042c;
    ::ll::UntypedStorage<4, 8>  mUnkc1616b;
    ::ll::UntypedStorage<8, 32> mUnk221f1b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SessionInfo& operator=(SessionInfo const&);
    SessionInfo(SessionInfo const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getBranchId() const;

    MCNAPI std::string const& getBuildId() const;

    MCNAPI std::string const& getCommitId() const;

    MCNAPI long getCrashTimestamp() const;

    MCNAPI std::optional<uint> const& getErrorCode() const;

    MCNAPI std::string const& getErrorMessage() const;

    MCNAPI std::map<std::string, std::string>& getTags();

    MCNAPI ~SessionInfo();
#else // @header-generator platform
    MCNAPI SessionInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
