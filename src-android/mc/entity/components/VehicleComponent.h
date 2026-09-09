#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"

struct VehicleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StrictActorIDEntityContextPair>> mPassengers;
    // NOLINTEND

public:
    // prevent constructor by default
    VehicleComponent& operator=(VehicleComponent const&);
};
