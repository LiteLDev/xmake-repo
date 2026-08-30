#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/Enum.h"
#include "mc/certificates/identity/IEduSsoStrategy.h"
#include "mc/certificates/identity/RetryState.h"
#include "mc/certificates/identity/SsoPromptMode.h"
#include "mc/deps/identity/edu_common/EduResourceType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct AccessTokenInfo;
namespace Identity { class IEduAuth; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Identity { struct ISettingStorageStrategy; }
namespace Json { class Value; }
// clang-format on

namespace Identity::Strategies {

class EduHeadlessSso : public ::Identity::IEduSsoStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Identity::Strategies::RetryState>  mAccessTokenRetryState;
    ::ll::TypedStorage<8, 16, ::Identity::Strategies::RetryState>  mGraphTokenRetryState;
    ::ll::TypedStorage<8, 8, ::Identity::ISettingStorageStrategy*> mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessSso();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Json::Value clientConfig(::Json::Value const&) const;

    virtual ::Identity::_TokenRefreshState::Enum refreshToken(::Identity::IEduAuth&, ::AccessTokenInfo const&, long, ::Identity::EduResourceType, std::function<void (Bedrock::Result<Identity::AuthToken, Identity::AuthError>)>, std::function<void ()>);

    virtual void onRefreshedToken(bool, ::Identity::EduResourceType);

    virtual ::Identity::SsoPromptMode signIn(::Identity::IEduAuth&, long, std::function<void ()>, std::function<void (std::optional<Bedrock::Result<Identity::AuthToken, Identity::AuthError>>)>);

    virtual void signInSuccess(std::string const&);

    virtual void demoSignInSuccess();

    virtual void resetAuthentication(::Identity::IEduAuth&, bool);

    virtual bool isDemoConversion() const;
    // clang-format on
    // NOLINTEND
};

} // namespace Identity::Strategies
