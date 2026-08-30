#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Hopper.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class HopperComponent : public ::Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    HopperComponent& operator=(HopperComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HopperComponent();

    MCNAPI ::BlockPos getLastPosition() const;

    MCNAPI bool pullInItems(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
