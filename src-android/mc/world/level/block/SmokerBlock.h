#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FurnaceBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class ItemInstance;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class SmokerBlock : public ::FurnaceBlock {
public:
    // prevent constructor by default
    SmokerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmokerBlock();

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SmokerBlock(std::string const&, int, bool);

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
