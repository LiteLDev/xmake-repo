#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Player;
class ShelfBlockActor;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class ShelfBlock : public ::ActorBlock {
public:
    // ShelfBlock inner types define
    enum class SlotState : uchar {
        Free     = 0,
        Occupied = 1,
        Invalid  = 2,
    };

    enum class SwapItemResult : int {
        NoItemsTransferred = 0,
        SingleItemTransfer = 1,
        TwoItemsSwapped    = 2,
    };

    enum class PoweredType : int {
        Unconnected = 0,
        Right       = 1,
        Center      = 2,
        Left        = 3,
        _count      = 4,
    };

    enum class NeighborDirection : uchar {
        Right = 0,
        Left  = 1,
    };

public:
    // prevent constructor by default
    ShelfBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ShelfBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual void movedByPiston(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShelfBlock(std::string const&, int);

    MCNAPI bool _blockHasPoweredShelfType(::BlockSource const&, ::BlockPos const&, ::ShelfBlock::PoweredType) const;

    MCNAPI std::tuple<ShelfBlockActor*, ShelfBlockActor*, ShelfBlockActor*>
           _getPoweredShelfBlockActorsForDoubleShelf(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI std::tuple<ShelfBlockActor*, ShelfBlockActor*, ShelfBlockActor*> _getPoweredShelfBlockActorsForTripleShelf(
        ::BlockSource&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool
    _isMatchingPoweredShelfInMatchingDirection(::BlockSource const&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void _setShelfData(::BlockSource&, ::BlockPos const&, bool, ::ShelfBlock::PoweredType) const;

    MCNAPI void _validatePoweredShelfCurrentStateFromNeighbors(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AABB const& _getShape(::BlockPos const&, ::Block const&, ::AABB&);

    MCNAPI static ::ShelfBlock::SlotState
    getBlockSlotState(::BlockPos const&, ::Vec3 const&, uchar const, ::BlockSource const&);
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
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI void $movedByPiston(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
