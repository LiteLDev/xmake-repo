#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseRailBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class PoweredRailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    PoweredRailBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PoweredRailBlock();

    virtual int getVariant(::Block const&) const;

    virtual void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PoweredRailBlock(std::string const&, int);
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
    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $_onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
