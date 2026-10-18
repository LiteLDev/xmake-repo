#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockPatternEvent.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockPatternPostEvent : public ::BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternPostEvent& operator=(BlockPatternPostEvent const&);
    BlockPatternPostEvent();
};
#else // @header-generator platform
struct BlockPatternPostEvent : public ::BlockPatternEvent {};
#endif // @header-generator platform
