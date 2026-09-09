#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ISubscriptionRefresher.h"

// auto generated forward declare list
// clang-format off
class SubscriptionRefresherServiceClient;
class TaskGroup;
// clang-format on

class SubscriptionRefresher : public ::ISubscriptionRefresher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<SubscriptionRefresherServiceClient>>> mServiceClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                           mTaskGroup;
    // NOLINTEND
};
