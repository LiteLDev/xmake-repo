#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SubscriptionMarketplace.h"

struct ActiveSubscription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              id;
    ::ll::TypedStorage<8, 24, std::string>              friendlyId;
    ::ll::TypedStorage<8, 24, std::string>              expirationDate;
    ::ll::TypedStorage<8, 24, std::string>              sku;
    ::ll::TypedStorage<4, 4, ::SubscriptionMarketplace> marketplace;
    // NOLINTEND
};
