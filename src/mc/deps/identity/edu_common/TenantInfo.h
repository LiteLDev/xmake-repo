#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/identity/edu_common/AuthToken.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct MessToken;
#else // @header-generator platform
namespace Identity { struct AuthToken; }
#endif // @header-generator platform
// clang-format on

class TenantInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>           mTenantUserDefinedName;
    ::ll::TypedStorage<8, 24, std::string>           mTenantGuid;
    ::ll::TypedStorage<8, 24, std::string>           mClientGuid;
    ::ll::TypedStorage<8, 24, std::string>           mClientSecret;
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken> mEntraToken;
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken> mRefreshToken;
    ::ll::TypedStorage<4, 4, uint>                   mFetchFailureStreak;
    ::ll::UntypedStorage<8, 104>                     mMessToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnkc4a972;
    ::ll::UntypedStorage<8, 32>  mUnk18aa38;
    ::ll::UntypedStorage<8, 32>  mUnke83400;
    ::ll::UntypedStorage<8, 32>  mUnk114b10;
    ::ll::UntypedStorage<8, 80>  mUnk506b20;
    ::ll::UntypedStorage<8, 80>  mUnk5446dd;
    ::ll::UntypedStorage<4, 4>   mUnk246934;
    ::ll::UntypedStorage<8, 136> mUnkc6beb3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TenantInfo& operator=(TenantInfo const&);
    TenantInfo(TenantInfo const&);
    TenantInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateEntraToken(::Identity::AuthToken const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void updateEntraToken(::Identity::AuthToken const& token);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
