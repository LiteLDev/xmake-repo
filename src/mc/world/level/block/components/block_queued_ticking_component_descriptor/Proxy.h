#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

namespace BlockQueuedTickingComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<int>>    mDelayIntervalRange;
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnTimeDown;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<int>>  mDelayIntervalRange;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnTimeDown;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                 mLooping;
    // NOLINTEND
};

} // namespace BlockQueuedTickingComponentDescriptor
