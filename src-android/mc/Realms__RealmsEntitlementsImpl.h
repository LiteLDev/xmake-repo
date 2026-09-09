#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Realms__IRealmsEntitlements.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class IEntitlementApi; }
// clang-format on

namespace Realms {

class RealmsEntitlementsImpl : public ::Realms::IRealmsEntitlements {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::IEntitlementApi>> mEntitlementApi;
    // NOLINTEND
};

} // namespace Realms
