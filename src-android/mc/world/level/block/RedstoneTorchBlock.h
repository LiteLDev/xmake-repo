#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class RedstoneTorchBlock : public ::TorchBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // prevent constructor by default
    RedstoneTorchBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RedstoneTorchBlock();

    virtual bool isSignalSource() const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual int getTickDelay();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedstoneTorchBlock(std::string const&, int, bool);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void onPlaceRedstoneTorchBlock(::BlockEvents::BlockPlaceEvent&) const;
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
    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI int $getTickDelay();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
