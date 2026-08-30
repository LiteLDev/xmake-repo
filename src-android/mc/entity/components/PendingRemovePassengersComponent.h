#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"

struct PendingRemovePassengersComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StrictActorIDEntityContextPair>> mPassengersToRemove;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingRemovePassengersComponent& operator=(PendingRemovePassengersComponent const&);
};
