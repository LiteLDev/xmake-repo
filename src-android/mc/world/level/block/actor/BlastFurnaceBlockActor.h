#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BlastFurnaceBlockActor : public ::FurnaceBlockActor {
public:
    // prevent constructor by default
    BlastFurnaceBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlastFurnaceBlockActor();

    virtual std::string getName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlastFurnaceBlockActor(::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
