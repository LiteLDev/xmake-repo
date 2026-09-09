#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInputTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerInputTick(ulong);

    MCNAPI explicit PlayerInputTick(::EntityContext const&);

    MCNAPI explicit operator ulong() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong);

    MCNAPI void* $ctor(::EntityContext const&);
    // NOLINTEND
};
