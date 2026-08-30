#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class RedstoneLampBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsLit;
    // NOLINTEND

public:
    // prevent constructor by default
    RedstoneLampBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RedstoneLampBlock();

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedstoneLampBlock(std::string const&, int, bool);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
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
    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
