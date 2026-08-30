#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Container;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ComposterBlock : public ::BlockType {
public:
    // ComposterBlock inner types define
    enum class FillLevel : int {
        Min    = 0,
        Max    = 7,
        Ready  = 8,
        _count = 9,
    };

public:
    // prevent constructor by default
    ComposterBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ComposterBlock();

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual void onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual int getVariant(::Block const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComposterBlock(std::string const&, int);

    MCNAPI void _emitBoneMeal(::Level&, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<ulong, schar> const& _getCompostableItems();

    MCNAPI static bool addItem(::Container&, int, ::ItemStack&, ::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static bool
    addItems(::Container&, int, ::ItemStack&, int, ::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static int addItems(::ItemStack const&, int, ::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static void empty(::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static ::ItemStack extractItem(::BlockSource&, ::Block const&, ::BlockPos const&);

    MCNAPI static ::Block const* getComposterAt(::BlockSource&, ::BlockPos const&);

    MCNAPI static schar getFillChance(::ItemStackBase const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    MCNAPI static ::Vec3 const& PARTICLE_OFFSET();
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
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI void $onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
