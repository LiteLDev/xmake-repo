#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockPatternEvent.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockPatternPreEvent : public ::BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternPreEvent& operator=(BlockPatternPreEvent const&);
    BlockPatternPreEvent();
};
#else // @header-generator platform
struct BlockPatternPreEvent : public ::BlockPatternEvent {};
#endif // @header-generator platform
