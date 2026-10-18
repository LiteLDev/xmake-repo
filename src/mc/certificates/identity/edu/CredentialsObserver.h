#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialReplaySubject.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
struct EDUConfigData;
namespace Core { class SingleThreadedLock; }
namespace edu::auth { struct CredentialsAcquired; }
namespace edu::auth { struct CredentialsRefreshSuccess; }
namespace edu::auth { struct CredsAuthComplete; }
namespace edu::auth { struct CredsExpired; }
namespace edu::auth { struct CredsLost; }
namespace edu::auth { struct GraphCredsRefreshFailed; }
namespace edu::auth { struct SignInCredsRefreshFailed; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace edu::auth {

#if defined(LL_PLAT_A) // @header-generator platform
struct CredentialsObserver : public ::Core::Observer<edu::auth::CredentialsObserver, Core::SingleThreadedLock> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CredentialsObserver : public ::Core::Observer<::edu::auth::CredentialsObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CredentialsObserver() /*override*/;

    virtual void onNotify(::edu::auth::CredentialsAcquired const& state);

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::SignInCredsRefreshFailed> const& state);

    virtual void onNotify(::EDUConfigData const& config);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsExpired> const& state);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::GraphCredsRefreshFailed> const& state);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onNotify(::edu::auth::CredentialsAcquired const& state);

    MCNAPI void $onNotify(::edu::auth::CredentialsRefreshSuccess const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::SignInCredsRefreshFailed> const& state);

    MCNAPI void $onNotify(::EDUConfigData const& config);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsExpired> const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::GraphCredsRefreshFailed> const& state);
    // NOLINTEND
};
#else // @header-generator platform
struct CredentialsObserver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace edu::auth
