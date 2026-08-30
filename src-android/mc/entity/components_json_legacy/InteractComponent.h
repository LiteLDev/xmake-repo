#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BlockSource;
class Interaction;
class InteractionResult;
class ItemStack;
class Level;
class LootTables;
class Player;
struct ItemSlotInfo;
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
    MCNAPI short getCooldownCounter() const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI void setCooldownCounter(short);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _trySendEquipmentSlot(::Actor&, ::SharedTypes::Legacy::EquipmentSlot);
    // NOLINTEND
};
