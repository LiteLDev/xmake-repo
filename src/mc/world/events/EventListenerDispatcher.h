#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class EventListenerDispatcher {};
#else // @header-generator platform
class EventListenerDispatcher {
public:
    virtual ~EventListenerDispatcher() = default;
};
#endif // @header-generator platform
