#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"
#include "mc/world/item/ItemStack.h"

namespace AgentComponents::Actions {

struct PlaceBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
    ::ll::TypedStorage<4, 4, int>                          slot;
    ::ll::TypedStorage<8, 152, ::ItemStack>                item;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlaceBlock(::AgentComponents::Actions::PlaceBlock const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AgentComponents::Actions::PlaceBlock const&);
    // NOLINTEND
};

} // namespace AgentComponents::Actions
