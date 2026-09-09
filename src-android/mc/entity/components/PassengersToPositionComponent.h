#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

struct PassengersToPositionComponent {
public:
    // PassengersToPositionComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // PassengersToPositionComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::StrictEntityContext> mPassenger;
        ::ll::TypedStorage<4, 8, ::StrictEntityContext> mVehicle;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PassengersToPositionComponent::Data>> mData;
    ::ll::TypedStorage<8, 24, std::vector<StrictEntityContext>>                 mStack;
    // NOLINTEND
};
