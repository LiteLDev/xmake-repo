#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Vec3;
struct BossComponent;
// clang-format on

class EnderDragonDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&> mDragon;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderDragonDeathWrapper& operator=(EnderDragonDeathWrapper const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnderDragonDeathWrapper(::EnderDragon&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EnderDragon&);
    // NOLINTEND
};
