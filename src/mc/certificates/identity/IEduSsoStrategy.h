#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/Enum.h"
#include "mc/certificates/identity/SsoPromptMode.h"
#include "mc/deps/identity/edu_common/EduResourceType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct AccessTokenInfo;
namespace Identity { class IEduAuth; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Json { class Value; }
// clang-format on

namespace Identity {

class IEduSsoStrategy {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // IEduSsoStrategy inner types define
    using RefreshingToken = std::function<void()>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IEduSsoStrategy();
#else // @header-generator platform
    virtual ~IEduSsoStrategy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value clientConfig(::Json::Value const&) const = 0;
#else // @header-generator platform
    virtual ::Json::Value clientConfig(::Json::Value const& loginResponse) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Identity::_TokenRefreshState::Enum refreshToken(::Identity::IEduAuth&, ::AccessTokenInfo const&, long, ::Identity::EduResourceType, std::function<void (Bedrock::Result<Identity::AuthToken, Identity::AuthError>)>, std::function<void ()>) = 0;
#else // @header-generator platform
    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&                                                                  auth,
        ::AccessTokenInfo const&                                                               info,
        int64                                                                                  currentTime,
        ::Identity::EduResourceType                                                            eduIdentityResource,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)> callback,
        ::std::function<void()>                                                                refreshingToken
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRefreshedToken(bool, ::Identity::EduResourceType) = 0;
#else // @header-generator platform
    virtual void onRefreshedToken(bool failed, ::Identity::EduResourceType eduIdentityResource) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Identity::SsoPromptMode signIn(::Identity::IEduAuth&, long, std::function<void ()>, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>) = 0;
#else // @header-generator platform
    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&   auth,
        int64                   currentTime,
        ::std::function<void()> showingDialogBoxCallback,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void signInSuccess(std::string const&) = 0;
#else // @header-generator platform
    virtual void signInSuccess(::std::string const& userHint) = 0;
#endif // @header-generator platform

    virtual void demoSignInSuccess() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetAuthentication(::Identity::IEduAuth&, bool) = 0;
#else // @header-generator platform
    virtual void resetAuthentication(::Identity::IEduAuth& auth, bool resetUIState) = 0;
#endif // @header-generator platform

    virtual bool isDemoConversion() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void signInGraph(::Identity::IEduAuth&, std::string const&, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void signInGraph(
        ::Identity::IEduAuth&                                                                                   auth,
        ::std::string const&                                                                                    userId,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Identity
