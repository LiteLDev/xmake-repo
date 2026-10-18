#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ActiveSubscription.h"
#include "mc/ISubscriptionStateManager.h"
#include "mc/InactiveSubscription.h"
#include "mc/SubscriptionOffer.h"
#include "mc/server/commands/edu/SubscriptionType.h"

class SubscriptionStateManager : public ::ISubscriptionStateManager {
public:
    // SubscriptionStateManager inner types declare
    // clang-format off
    struct SubscriptionTierState;
    // clang-format on

    // SubscriptionStateManager inner types define
    struct SubscriptionTierState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ActiveSubscription>>   activeSubscriptions;
        ::ll::TypedStorage<8, 24, std::vector<InactiveSubscription>> inactiveSubscriptions;
        ::ll::TypedStorage<8, 144, std::optional<SubscriptionOffer>> nextAvailableOffer;
        ::ll::TypedStorage<8, 144, std::optional<SubscriptionOffer>> fallbackOffer;
        ::ll::TypedStorage<8, 24, std::vector<SubscriptionOffer>>    availableOffers;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mSubscriptionDataMutex;
    ::ll::TypedStorage<1, 40, std::unordered_map<SubscriptionType, SubscriptionStateManager::SubscriptionTierState>> mStateMap;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
