#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/FeedItem.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
#if defined(LL_PLAT_A) // @header-generator platform
class HealableDefinition;
#else // @header-generator platform
#endif // @header-generator platform
class InteractionResult;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct FeedItem;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class HealableComponent {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform
    // NOLINTEND
};
