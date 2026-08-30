#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/DispenserBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class DropperBlock : public ::DispenserBlock {
public:
    // prevent constructor by default
    DropperBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropperBlock();

    virtual void dispenseFrom(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DropperBlock(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getAttachedFace(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $dispenseFrom(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
