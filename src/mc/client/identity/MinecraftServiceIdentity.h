#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/MinecraftAccountPermissions.h"
#include "mc/client/identity/Identity.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services { class ISessionAuthService; }
namespace Social { class AuthServiceApi; }
namespace Social { class User; }
namespace Social { struct AuthServiceSession; }
namespace Social { struct AuthToken; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct SingleIdentitySignInResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class MinecraftServiceIdentity : public ::Social::Identity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                             mTaskGroup;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>> mAuthServiceApi;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsPrimaryUser;
    ::ll::UntypedStorage<8, 616>                                                        mResultQueue;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mOwnerSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mSessionAuthSubscription;
    ::ll::TypedStorage<8, 8, ::MinecraftAccountPermissions>                             mAccountPermissions;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftServiceIdentity();

    virtual ::Social::IdentityEventResponse initialize(std::weak_ptr<Social::User>);

    virtual ::Social::IdentityType getType() const;

    virtual ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> signIn(::Social::IdentitySignInProperties&&);

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;

    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity&);

    virtual ::Social::IdentityEventResponse onIdentitySignOut(::Social::IdentityType);

    virtual ::Bedrock::Threading::Async<Social::AuthToken> getAuthToken(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftServiceIdentity(::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>, bool);

    MCNAPI ::MinecraftAccountPermissions const& getMinecraftAccountPermissions() const;

    MCNAPI void setSessionAuthService(::Bedrock::Services::ISessionAuthService&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Social::MinecraftServiceIdentity>
    create(::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>, bool);

    MCNAPI static ::Social::IdentityType getTypeStatic();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::IdentityEventResponse $initialize(std::weak_ptr<Social::User>);

    MCNAPI ::Social::IdentityType $getType() const;

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    $signIn(::Social::IdentitySignInProperties&&);

    MCNAPI ::gsl::span<const Social::IdentityType> $getDependencies() const;

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignIn(::Social::Identity&);

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignOut(::Social::IdentityType);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthToken> $getAuthToken(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MinecraftServiceIdentity {};
#endif // @header-generator platform

} // namespace Social
