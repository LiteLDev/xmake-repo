#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/identity/edu_common/AuthToken.h"

// auto generated forward declare list
// clang-format off
struct MessToken;
// clang-format on

class TenantInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>           mTenantUserDefinedName;
    ::ll::TypedStorage<8, 24, std::string>           mTenantGuid;
    ::ll::TypedStorage<8, 24, std::string>           mClientGuid;
    ::ll::TypedStorage<8, 24, std::string>           mClientSecret;
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken> mEntraToken;
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken> mRefreshToken;
    ::ll::TypedStorage<4, 4, uint>                   mFetchFailureStreak;
    ::ll::UntypedStorage<8, 104>                     mMessToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void updateEntraToken(::Identity::AuthToken const&);
    // NOLINTEND
};
