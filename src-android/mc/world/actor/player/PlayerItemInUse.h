#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerInventorySlotData.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Player;
// clang-format on

class PlayerItemInUse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mShouldEmitGameEvents;
    ::ll::TypedStorage<8, 152, ::ItemStack>             mItem;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData> mSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& getItemInUse() const;

    MCNAPI ~PlayerItemInUse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
