#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct SubscriptionInfo; }
// clang-format on

namespace Realms {

class ISubscriptionApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ISubscriptionApi() = default;

    virtual void getSubscriptionDetails(::Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::SubscriptionInfo)>) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Realms
