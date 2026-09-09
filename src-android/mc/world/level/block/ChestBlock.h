#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/ChestType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Container;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChestBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChestType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestBlock();

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isContainerBlock() const;

    virtual bool isChestBlock() const;

    virtual bool isSignalSource() const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual void onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool detachesOnPistonMove(::BlockSource&, ::BlockPos const&) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;

    virtual ::Block const& getInitialDefaultState();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestBlock(std::string const&, int, ::ChestType, ::SharedTypes::v1_26_20::MaterialType);

    MCNAPI bool canPairWith(::ChestBlock const&) const;

    MCNAPI ::ChestType getChestType() const;

    MCNAPI void onPairedWith(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void updateSignalStrength(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::ChestType, ::SharedTypes::v1_26_20::MaterialType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isContainerBlock() const;

    MCNAPI bool $isChestBlock() const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI void $onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $detachesOnPistonMove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::Block const& $getInitialDefaultState();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
