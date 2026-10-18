#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/SubscriptionInfo.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmsSubscriptionInfo : public ::Realms::SubscriptionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> realmId;
    ::ll::TypedStorage<4, 4, int>          maxPlayers;
    ::ll::TypedStorage<8, 24, std::string> purchaseStoreDisplayName;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionInfo& operator=(RealmsSubscriptionInfo const&);
    RealmsSubscriptionInfo(RealmsSubscriptionInfo const&);
    RealmsSubscriptionInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsSubscriptionInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsSubscriptionInfo {};
#endif // @header-generator platform

} // namespace Realms
