#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SeasonsAgnosticLeavesBlock.h"

// auto generated forward declare list
// clang-format off
struct BlockAnimateTickData;
// clang-format on

class CherryLeavesBlock : public ::SeasonsAgnosticLeavesBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CherryLeavesBlock();

    virtual void animateTick(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
