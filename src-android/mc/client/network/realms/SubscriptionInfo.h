#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct SubscriptionInfo {
public:
    // SubscriptionInfo inner types define
    enum class PurchaseType : int {
        Consumable   = 0,
        Subscription = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Realms::SubscriptionInfo::PurchaseType> purchaseType;
    ::ll::TypedStorage<8, 24, std::string>                             id;
    ::ll::TypedStorage<8, 24, std::string>                             storeId;
    ::ll::TypedStorage<4, 4, int>                                      renewalPeriod;
    ::ll::TypedStorage<4, 4, int>                                      daysLeft;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI ~SubscriptionInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
