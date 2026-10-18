#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTameItem.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class ItemDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionTameItem;
#endif // @header-generator platform
// clang-format on

class TameableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                 mChance;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTameItem>> mTameItems;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                     mChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTameItem>> mTameItems;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TameableComponent& operator=(TameableComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
#else // @header-generator platform
    MCAPI bool _canTame(::Actor& owner, ::Player& player, ::ItemDescriptor& resultItemOut);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tame(::Actor&, ::Player&);
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool useInteractItem(::Actor&, ::Player&);
#else // @header-generator platform
    MCAPI void tame(::Actor& owner, ::Player& player);
#endif // @header-generator platform
    // NOLINTEND
};
