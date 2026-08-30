#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
class Material;
struct CopperBlockSet;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperDoorBlock : public ::CopperBlock<DoorBlock> {
public:
    // prevent constructor by default
    CopperDoorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CopperDoorBlock();

    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperDoorBlock(std::string const&, int, ::CopperBlockSet const&, ::Material const&, ::DoorBlock::DoorType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CopperBlockSet const&, ::Material const&, ::DoorBlock::DoorType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
