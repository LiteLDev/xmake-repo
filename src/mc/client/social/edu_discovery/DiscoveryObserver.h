#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
namespace EDUDiscovery { struct JoinCode; }
namespace EDUDiscovery { struct ServerInvalidationDetails; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
class DiscoveryObserver : public ::Core::Observer<EDUDiscovery::DiscoveryObserver, Core::SingleThreadedLock> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DiscoveryObserver : public ::Core::Observer<::EDUDiscovery::DiscoveryObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&);

    virtual void onHeartbeat();

    virtual void onJoinCodeGenerated(::EDUDiscovery::JoinCode const&);

    virtual void onCredentialsInvalidated();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onHeartbeat();
    // NOLINTEND
};
#else // @header-generator platform
class DiscoveryObserver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace EDUDiscovery
