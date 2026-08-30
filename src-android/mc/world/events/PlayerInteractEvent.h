#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::UntypedStorage<1, 24>             mTargetEntity;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&);
    PlayerInteractEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerInteractEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
