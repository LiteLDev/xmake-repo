#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

namespace Social::Events {

struct PlayerTelemetryLoadout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack const> headArmor;
    ::ll::TypedStorage<8, 152, ::ItemStack const> feetArmor;
    ::ll::TypedStorage<8, 152, ::ItemStack const> legsArmor;
    ::ll::TypedStorage<8, 152, ::ItemStack const> torsoArmor;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTelemetryLoadout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerTelemetryLoadout();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
