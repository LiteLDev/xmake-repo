#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RedStoneOreBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class DeepslateRedStoneOreBlock : public ::RedStoneOreBlock {
public:
    // prevent constructor by default
    DeepslateRedStoneOreBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeepslateRedStoneOreBlock();

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void _lightUpBlock(::BlockSource&, ::BlockPos const&) const;

    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeepslateRedStoneOreBlock(std::string const&, int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void $_lightUpBlock(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
