#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class HashedString;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class ConcretePowderBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    ConcretePowderBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConcretePowderBlock();

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool shouldStopFalling(::Actor&) const;

    virtual ::mce::Color getDustColor(::Block const&) const;

    virtual std::string getDustParticleName(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConcretePowderBlock(std::string const&, int);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isTouchingWater(::BlockSource const&, ::BlockPos const&);

    MCNAPI static bool _tryTouchWater(::BlockSource&, ::BlockPos const&, std::optional<HashedString>);
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
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $shouldStopFalling(::Actor&) const;

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI std::string $getDustParticleName(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
