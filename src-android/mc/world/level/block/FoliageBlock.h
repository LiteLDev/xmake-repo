#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FoliageBlock : public ::BlockType {
public:
    // prevent constructor by default
    FoliageBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FoliageBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    virtual void checkAlive(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& setGrowth(::BlockSource&, ::BlockPos const&, ::Block const&, ushort, int) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FoliageBlock(std::string const&, int, ::Material const&);

    MCNAPI bool growCrops(::BlockSource&, ::BlockPos const&, ::FertilizerType) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MAX();

    MCNAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MIN();

    MCNAPI static ushort const& MAX_GROWTH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
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

    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void $checkAlive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $setGrowth(::BlockSource&, ::BlockPos const&, ::Block const&, ushort, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
