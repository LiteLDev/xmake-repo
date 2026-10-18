#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/ActorBlockBase.h"
#endif // @header-generator platform
#include "mc/world/level/block/BlockSupportType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/BlockType.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class NeighborDirection : uchar {
        Right = 0,
        Left  = 1,
    };

    enum class PoweredType : int {
        Unconnected = 0,
        Right       = 1,
        Center      = 2,
        Left        = 3,
        Count       = 4,
    };

#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
public:
    // prevent constructor by default
    ShelfBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ShelfBlock();
#else // @header-generator platform
    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual bool hasComparatorSignal() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
#else // @header-generator platform
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void movedByPiston(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::AABB&           bufferAABB
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isInteractiveBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasComparatorSignal() const;
#else // @header-generator platform
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;
#else // @header-generator platform
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;
    // clang-format on
#else // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ShelfBlock(std::string const&, int);
#else // @header-generator platform
    MCAPI ShelfBlock(::std::string const& nameId, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _blockHasPoweredShelfType(::BlockSource const&, ::BlockPos const&, ::ShelfBlock::PoweredType) const;

    MCNAPI std::tuple<ShelfBlockActor*, ShelfBlockActor*, ShelfBlockActor*>
           _getPoweredShelfBlockActorsForDoubleShelf(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI std::tuple<ShelfBlockActor*, ShelfBlockActor*, ShelfBlockActor*> _getPoweredShelfBlockActorsForTripleShelf(
        ::BlockSource&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI ::std::tuple<::ShelfBlockActor*, ::ShelfBlockActor*, ::ShelfBlockActor*>
    _getPoweredShelfBlockActorsForDoubleShelf(
        ::BlockSource&    region,
        ::BlockPos const& shelfLeft,
        ::BlockPos const& shelfRight
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _isMatchingPoweredShelfInMatchingDirection(::BlockSource const&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::tuple<::ShelfBlockActor*, ::ShelfBlockActor*, ::ShelfBlockActor*>
    _getPoweredShelfBlockActorsForTripleShelf(
        ::BlockSource&    region,
        ::BlockPos const& shelfLeft,
        ::BlockPos const& shelfCenter,
        ::BlockPos const& shelfRight
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;
#else // @header-generator platform
    MCAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setShelfData(::BlockSource&, ::BlockPos const&, bool, ::ShelfBlock::PoweredType) const;
#else // @header-generator platform
    MCAPI void
    _setShelfData(::BlockSource& region, ::BlockPos const& pos, bool powered, ::ShelfBlock::PoweredType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _validatePoweredShelfCurrentStateFromNeighbors(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
#else // @header-generator platform
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AABB const& _getShape(::BlockPos const&, ::Block const&, ::AABB&);
#else // @header-generator platform
    MCAPI static bool
    _blockHasPoweredShelfType(::BlockSource const& region, ::BlockPos const& pos, ::ShelfBlock::PoweredType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ShelfBlock::SlotState
    getBlockSlotState(::BlockPos const&, ::Vec3 const&, uchar const, ::BlockSource const&);
#else // @header-generator platform
    MCAPI static ::AABB const& _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue);

    MCAPI static bool _isMatchingPoweredShelfInMatchingDirection(
        ::BlockSource const& region,
        ::BlockPos const&    pos,
        ::BlockPos const&    neighbor
    );

    MCAPI static bool _swapItemsWithUnpoweredShelf(
        ::Player&          player,
        ::BlockPos const&  pos,
        ::BlockSource&     region,
        ::ShelfBlockActor& blockActor,
        ::Vec3 const&      blockHit,
        uchar              hitFace
    );

    MCAPI static void _validatePoweredShelfCurrentStateFromNeighbors(::BlockSource& region, ::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCAPI static ::ShelfBlock::SlotState
    getBlockSlotState(::BlockPos const& blockPos, ::Vec3 const& blockHit, uchar faceHit, ::BlockSource const& region);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
#else // @header-generator platform
    MCFOLD void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
#endif // @header-generator platform
        ::IConstBlockSource const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    MCFOLD ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
#else // @header-generator platform
    MCFOLD ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::AABB&           bufferAABB
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
#else // @header-generator platform
    MCFOLD bool $isInteractiveBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $movedByPiston(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasComparatorSignal() const;
#else // @header-generator platform
    MCAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;
#else // @header-generator platform
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
