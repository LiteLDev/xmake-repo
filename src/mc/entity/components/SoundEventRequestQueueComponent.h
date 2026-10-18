#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SoundEventRequest.h"

struct SoundEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::queue<SoundEventRequest, std::deque<SoundEventRequest>>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::queue<::SoundEventRequest, ::std::deque<::SoundEventRequest>>> mRequests;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SoundEventRequestQueueComponent& operator=(SoundEventRequestQueueComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
