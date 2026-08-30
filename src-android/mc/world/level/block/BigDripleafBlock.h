#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class BigDripleafBlock : public ::BlockType {
public:
    // prevent constructor by default
    BigDripleafBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BigDripleafBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    virtual bool isLavaBlocking() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& getInitialDefaultState();

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BigDripleafBlock(std::string const&, int);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void _resetTilt(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void _setTiltAndScheduleTick(::BigDripleafTilt, ::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void placeWithRandomHeight(::BlockSource&, ::Random&, ::BlockPos, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_DRIPLEAF_GROWTH_HEIGHT();
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

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getInitialDefaultState();

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
