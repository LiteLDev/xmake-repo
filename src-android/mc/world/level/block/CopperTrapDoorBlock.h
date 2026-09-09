#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/TrapDoorBlock.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class Material;
struct CopperBlockSet;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperTrapDoorBlock : public ::CopperBlock<TrapDoorBlock> {
public:
    // prevent constructor by default
    CopperTrapDoorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CopperTrapDoorBlock();

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperTrapDoorBlock(std::string const&, int, ::CopperBlockSet const&, ::Material const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CopperBlockSet const&, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $_useTrapDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
