#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/services/CachedAsync.h"
#include "mc/network/services/CachedAsyncRetry.h"
#include "mc/network/services/CachedAsyncSource.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TenantInfo;
namespace Identity { struct AuthArgs; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Identity { struct EduAuthParameters; }
namespace Identity { struct EduAuthTokenPair; }
namespace Identity { struct SignOutResult; }
// clang-format on

namespace Identity {

class IEduAuth : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TenantInfo>> mTenantInfo;
    ::ll::UntypedStorage<8, 64>                           mGetMessSigningPublicKeys;
    ::ll::TypedStorage<8, 24, std::string const>          mGameVersion;
    ::ll::UntypedStorage<8, 16>                           mGetEduToken;
    ::ll::UntypedStorage<8, 72>                           mEduTokenServicePromise;
    // NOLINTEND

public:
    // prevent constructor by default
    IEduAuth();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IEduAuth() = default;

    virtual void Authenticate(::Identity::AuthArgs const&, std::function<void ()>, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>) = 0;

    virtual void resetAuthenticationState() = 0;

    virtual void clearCookies() = 0;

    virtual void signOut(std::string_view, std::function<void (Identity::SignOutResult)>) = 0;

    virtual void authenticateSilently(std::string_view, std::string const&, std::function<void (Bedrock::Result<Identity::AuthToken, Identity::AuthError>)>) = 0;

    virtual void authenticateSilentlyCredentialed();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::CachedAsync<std::optional<std::string>> getEduToken() const;

    MCNAPI ::Identity::EduAuthTokenPair getTokens() const;

    MCNAPI bool hasValidMessToken() const;

    MCNAPI void resetEduToken();

    MCNAPI void setEduToken(std::string const&);

    MCNAPI void setTokens(::Identity::EduAuthTokenPair);
    // NOLINTEND
};

} // namespace Identity
