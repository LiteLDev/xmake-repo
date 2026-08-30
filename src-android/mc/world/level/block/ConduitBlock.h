#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class ConduitBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ConduitBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConduitBlock();

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConduitBlock(std::string const&, int);
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
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
