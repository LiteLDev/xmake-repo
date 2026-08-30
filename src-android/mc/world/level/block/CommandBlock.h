#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CommandBlockActor;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class CommandBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CommandBlockMode> mCBMode;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlock();

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual bool canInstatick() const;

    virtual int getVariant(::Block const&) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual bool isInteractiveBlock() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlock(std::string const&, int, ::CommandBlockMode);

    MCNAPI void _executeChain(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool _executeChainBlock(::BlockSource&, ::BlockPos const&, ::CommandBlockActor&, bool) const;

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI ::CommandBlockMode getMode() const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void updateBlock(::BlockSource&, ::BlockPos const&, ::CommandBlockMode, bool) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<int[3]> mCBModeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CommandBlockMode);
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

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI bool $canInstatick() const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
