#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerShootArrowEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::UntypedStorage<1, 24>             mArrow;
    ::ll::TypedStorage<8, 152, ::ItemStack> mWeaponItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mArrowItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerShootArrowEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
