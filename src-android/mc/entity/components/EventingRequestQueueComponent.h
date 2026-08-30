#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/EventingRequest.h"

struct EventingRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::queue<EventingRequest, std::deque<EventingRequest>>> mRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&);
};
