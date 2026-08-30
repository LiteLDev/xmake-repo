#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/LightningRodBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct CopperBlockSet;
// clang-format on

class CopperLightningRodBlock : public ::CopperBlock<LightningRodBlock> {
public:
    // prevent constructor by default
    CopperLightningRodBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CopperLightningRodBlock();

    virtual void onLightningHit(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperLightningRodBlock(std::string const&, int, ::CopperBlockSet const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CopperBlockSet const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLightningHit(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
