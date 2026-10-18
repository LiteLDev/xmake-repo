#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActionEvent.h"

class ActionQueue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::deque<ActionEvent>> mQueue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::deque<::ActionEvent>> mQueue;
#endif // @header-generator platform
    // NOLINTEND
};
