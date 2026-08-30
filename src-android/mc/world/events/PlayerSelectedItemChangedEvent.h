#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct PlayerSelectedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSelectedItemChangedEvent& operator=(PlayerSelectedItemChangedEvent const&);
    PlayerSelectedItemChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerSelectedItemChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
