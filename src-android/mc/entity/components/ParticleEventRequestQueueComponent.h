#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ParticleEventRequest.h"

struct ParticleEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::queue<ParticleEventRequest, std::deque<ParticleEventRequest>>> mRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventRequestQueueComponent& operator=(ParticleEventRequestQueueComponent const&);
};
