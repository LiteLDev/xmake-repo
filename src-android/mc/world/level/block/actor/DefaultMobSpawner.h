#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BaseMobSpawner.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class MobSpawnerBlockActor;
// clang-format on

class DefaultMobSpawner : public ::BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MobSpawnerBlockActor*> mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultMobSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultMobSpawner();

    virtual ::BlockPos const& getPos();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DefaultMobSpawner(::MobSpawnerBlockActor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MobSpawnerBlockActor*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos const& $getPos();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
