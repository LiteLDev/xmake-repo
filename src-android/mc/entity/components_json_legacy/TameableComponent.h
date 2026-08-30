#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTameItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class Player;
// clang-format on

class TameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                 mChance;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTameItem>> mTameItems;
    // NOLINTEND

public:
    // prevent constructor by default
    TameableComponent& operator=(TameableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI void tame(::Actor&, ::Player&);

    MCNAPI bool useInteractItem(::Actor&, ::Player&);
    // NOLINTEND
};
