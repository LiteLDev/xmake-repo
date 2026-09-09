#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/FeedItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class HealableDefinition;
class InteractionResult;
class ItemStack;
class Player;
struct FeedItem;
// clang-format on

class HealableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
    // NOLINTEND
};
