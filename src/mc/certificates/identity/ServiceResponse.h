#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/AccessTokenInfo.h"
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/certificates/identity/edu/Role.h"

// auto generated forward declare list
// clang-format off
struct MessToken;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Identity {

struct ServiceResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk2ef2d1;
    ::ll::UntypedStorage<1, 1>   mUnk657add;
    ::ll::UntypedStorage<1, 1>   mUnkc37cbe;
    ::ll::UntypedStorage<1, 1>   mUnk7a048d;
    ::ll::UntypedStorage<1, 1>   mUnkc21590;
    ::ll::UntypedStorage<8, 32>  mUnk8e74cf;
    ::ll::UntypedStorage<8, 32>  mUnk8c7407;
    ::ll::UntypedStorage<8, 32>  mUnk1b2f6a;
    ::ll::UntypedStorage<8, 32>  mUnk96a24f;
    ::ll::UntypedStorage<8, 32>  mUnk1aa52e;
    ::ll::UntypedStorage<8, 32>  mUnka012fd;
    ::ll::UntypedStorage<8, 32>  mUnk530fee;
    ::ll::UntypedStorage<8, 32>  mUnkb5f8d8;
    ::ll::UntypedStorage<8, 136> mUnkb6c00c;
    ::ll::UntypedStorage<8, 40>  mUnkc03a49;
    ::ll::UntypedStorage<8, 552> mUnk1165b9;
    ::ll::UntypedStorage<4, 4>   mUnkb336cc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceResponse& operator=(ServiceResponse const&);
    ServiceResponse(ServiceResponse const&);
    ServiceResponse();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Identity
