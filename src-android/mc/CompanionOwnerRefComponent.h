#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct CompanionOwnerRefComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    CompanionOwnerRefComponent& operator=(CompanionOwnerRefComponent const&);
};
