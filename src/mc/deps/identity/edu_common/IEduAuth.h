#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/services/CachedAsync.h"
#include "mc/network/services/CachedAsyncRetry.h"
#include "mc/network/services/CachedAsyncSource.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class TenantInfo;
namespace Identity { struct AuthArgs; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Identity { struct EduAuthParameters; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Identity { struct EduAuthTokenPair; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Identity { struct AuthArgs; }
#endif // @header-generator platform
namespace Identity { struct SignOutResult; }
// clang-format on

namespace Identity {

class IEduAuth : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<TenantInfo>> mTenantInfo;
    ::ll::UntypedStorage<8, 64>                           mGetMessSigningPublicKeys;
    ::ll::TypedStorage<8, 24, std::string const>          mGameVersion;
    ::ll::UntypedStorage<8, 16>                           mGetEduToken;
    ::ll::UntypedStorage<8, 72>                           mEduTokenServicePromise;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk932c52;
    ::ll::UntypedStorage<8, 64> mUnk89cc47;
    ::ll::UntypedStorage<8, 32> mUnke91259;
    ::ll::UntypedStorage<8, 16> mUnk28162c;
    ::ll::UntypedStorage<8, 72> mUnk6c2a08;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    IEduAuth& operator=(IEduAuth const&);
    IEduAuth(IEduAuth const&);
#endif // @header-generator platform
    IEduAuth();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IEduAuth() = default;
#else // @header-generator platform
    virtual ~IEduAuth() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void Authenticate(::Identity::AuthArgs const&, std::function<void ()>, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>) = 0;
#else // @header-generator platform
    virtual void Authenticate(
        ::Identity::AuthArgs const&,
        ::std::function<void()>,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) = 0;
#endif // @header-generator platform

    virtual void resetAuthenticationState() = 0;

    virtual void clearCookies() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void signOut(std::string_view, std::function<void (Identity::SignOutResult)>) = 0;
#else // @header-generator platform
    virtual void signOut(::std::string_view, ::std::function<void(::Identity::SignOutResult)>) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void authenticateSilently(std::string_view, std::string const&, std::function<void (Bedrock::Result<Identity::AuthToken, Identity::AuthError>)>) = 0;
#else // @header-generator platform
    virtual void authenticateSilently(
        ::std::string_view,
        ::std::string const&,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>
    ) = 0;
#endif // @header-generator platform

    virtual void authenticateSilentlyCredentialed();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::CachedAsync<std::optional<std::string>> getEduToken() const;

    MCNAPI ::Identity::EduAuthTokenPair getTokens() const;

    MCNAPI bool hasValidMessToken() const;

    MCNAPI void resetEduToken();

    MCNAPI void setEduToken(std::string const&);

    MCNAPI void setTokens(::Identity::EduAuthTokenPair);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void resetEduToken();

    MCNAPI void setTokens(::Identity::EduAuthTokenPair tokens);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Identity
