#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/AccessTokenInfo.h"
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/certificates/identity/edu/Role.h"

// auto generated forward declare list
// clang-format off
struct MessToken;
// clang-format on

namespace Identity {

struct ServiceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mIsValid;
    ::ll::TypedStorage<1, 1, bool>                                  mHasAcceptedEula;
    ::ll::TypedStorage<1, 1, bool>                                  mIsLicensed;
    ::ll::TypedStorage<1, 1, bool>                                  mIsNewUser;
    ::ll::TypedStorage<1, 1, ::edu::Role>                           mRole;
    ::ll::TypedStorage<8, 24, std::string>                          mName;
    ::ll::TypedStorage<8, 24, std::string>                          mSkin;
    ::ll::TypedStorage<8, 24, std::string>                          mTenantId;
    ::ll::TypedStorage<8, 24, std::string>                          mOid;
    ::ll::TypedStorage<8, 24, std::string>                          mUnanonymizedOid;
    ::ll::TypedStorage<8, 24, std::string>                          mNickname;
    ::ll::TypedStorage<8, 24, std::string>                          mDemoSessionId;
    ::ll::TypedStorage<8, 24, std::string>                          mTenantType;
    ::ll::UntypedStorage<8, 104>                                    mMessToken;
    ::ll::TypedStorage<8, 32, ::AccessTokenInfo>                    mAccessTokenInfo;
    ::ll::TypedStorage<8, 424, std::optional<ActiveDirectoryPopup>> mPopup;
    ::ll::TypedStorage<4, 4, int>                                   mTrialsRemaining;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceResponse& operator=(ServiceResponse const&);
    ServiceResponse(ServiceResponse const&);
    ServiceResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServiceResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
