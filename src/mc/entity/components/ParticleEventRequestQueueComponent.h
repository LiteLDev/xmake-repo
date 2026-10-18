#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ParticleEventRequest.h"

struct ParticleEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::queue<ParticleEventRequest, std::deque<ParticleEventRequest>>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::queue<::ParticleEventRequest, ::std::deque<::ParticleEventRequest>>> mRequests;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ParticleEventRequestQueueComponent& operator=(ParticleEventRequestQueueComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
