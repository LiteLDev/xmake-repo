#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
class Interaction;
#else // @header-generator platform
#endif // @header-generator platform
class InteractionResult;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
class Level;
class LootTables;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemSlotInfo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class InteractComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mCooldownCounter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getCooldownCounter() const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI void setCooldownCounter(short);
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _trySendEquipmentSlot(::Actor&, ::SharedTypes::Legacy::EquipmentSlot);
#else // @header-generator platform
    MCAPI static void _trySendEquipmentSlot(::Actor& owner, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot);
#endif // @header-generator platform
    // NOLINTEND
};
