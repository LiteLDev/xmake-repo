#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AmethystBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
class Material;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class BuddingAmethystBlock : public ::AmethystBlock {
public:
    // prevent constructor by default
    BuddingAmethystBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BuddingAmethystBlock();

    virtual bool isSilentWhenJumpingOff() const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BuddingAmethystBlock(std::string const&, int, ::Material const&);

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canBudGrowAtPos(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSilentWhenJumpingOff() const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
