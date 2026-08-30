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
    // IEduSsoStrategy inner types define
    using RefreshingToken = std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IEduSsoStrategy();

    virtual ::Json::Value clientConfig(::Json::Value const&) const = 0;

    virtual ::Identity::_TokenRefreshState::Enum refreshToken(::Identity::IEduAuth&, ::AccessTokenInfo const&, long, ::Identity::EduResourceType, std::function<void (Bedrock::Result<Identity::AuthToken, Identity::AuthError>)>, std::function<void ()>) = 0;

    virtual void onRefreshedToken(bool, ::Identity::EduResourceType) = 0;

    virtual ::Identity::SsoPromptMode signIn(::Identity::IEduAuth&, long, std::function<void ()>, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>) = 0;

    virtual void signInSuccess(std::string const&) = 0;

    virtual void demoSignInSuccess() = 0;

    virtual void resetAuthentication(::Identity::IEduAuth&, bool) = 0;

    virtual bool isDemoConversion() const = 0;

    virtual void signInGraph(::Identity::IEduAuth&, std::string const&, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
