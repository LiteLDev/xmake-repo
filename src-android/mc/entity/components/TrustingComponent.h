#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Item;
class ItemStack;
class Player;
// clang-format on

struct TrustingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                  mChance;
    ::ll::TypedStorage<8, 24, std::set<const Item*>> mTrustItems;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustingComponent& operator=(TrustingComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
    // NOLINTEND
};
