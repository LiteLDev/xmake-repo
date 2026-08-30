#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class ItemInstance;
class Player;
class Vec3;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class BedBlock : public ::BlockType {
public:
    // prevent constructor by default
    BedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedBlock();

    virtual ::Block const* getNextBlockPermutation(::Block const&) const;

    virtual bool canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& sanitizeFillBlock(::Block const&) const;

    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool canSpawnAt(::BlockSource const&, ::BlockPos const&) const;

    virtual int telemetryVariant(::BlockSource&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual bool isInteractiveBlock() const;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BedBlock(std::string const&, int);

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<BlockPos>
    findWakeupPosition(::BlockSource const&, ::BlockPos const&, std::optional<Vec3> const&);

    MCNAPI static float getSleepRotation(::Block const&);

    MCNAPI static bool isBedBlock(::BlockType const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& HEAD_PIECE_DATA();

    MCNAPI static ushort const& OCCUPIED_DATA();
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
    MCNAPI ::Block const* $getNextBlockPermutation(::Block const&) const;

    MCNAPI bool $canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $sanitizeFillBlock(::Block const&) const;

    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $canSpawnAt(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI int $telemetryVariant(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
