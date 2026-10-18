#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InputEntry.h"

struct ServerScriptInputPacketQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::deque<InputEntry>> mQueuedUpdates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::deque<::InputEntry>> mQueuedUpdates;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerScriptInputPacketQueueComponent& operator=(ServerScriptInputPacketQueueComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
