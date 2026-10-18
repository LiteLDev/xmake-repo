#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/EventingRequest.h"

struct EventingRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::queue<EventingRequest, std::deque<EventingRequest>>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::queue<::EventingRequest, ::std::deque<::EventingRequest>>> mRequests;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
