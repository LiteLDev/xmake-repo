#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemActor;
class ItemStack;
// clang-format on

struct HopperCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::function<bool(ItemActor&, const ItemStack&, int)>> beforeAcquireItem;
    ::ll::TypedStorage<8, 48, std::function<void(ItemActor&, const ItemStack&, int)>> afterAcquireItem;
    // NOLINTEND

public:
    // prevent constructor by default
    HopperCallbacks& operator=(HopperCallbacks const&);
    HopperCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HopperCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
