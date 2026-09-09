#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/CropGrowthTarget.h"
#include "mc/world/level/block/CropParams.h"
#include "mc/world/level/block/CropPlacementSurface.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
namespace BlockEvents { class ActorInternalEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class CropBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 264, ::CropParams>         mCropParams;
    ::ll::TypedStorage<4, 4, ::CropPlacementSurface> mPlacementSurfaceType;
    ::ll::TypedStorage<8, 40, ::HashedString>        mCustomPlacementTag;
    ::ll::TypedStorage<4, 4, ::CropGrowthTarget>     mGrowthTargetType;
    ::ll::TypedStorage<8, 24, std::string>           mGrowthTargetFeatureName;
    // NOLINTEND

public:
    // prevent constructor by default
    CropBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CropBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool hasTag(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& setGrowth(::BlockSource&, ::BlockPos const&, ::Block const&, ushort, int) const;

    virtual ::ItemInstance const getBaseSeed() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CropBlock(std::string const&, int, ::CropParams);

    MCNAPI bool _placeFeature(::BlockSource&, ::BlockPos const&, ::Block const&, int) const;

    MCNAPI void onEvent(::BlockEvents::ActorInternalEvent&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CropParams);
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

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $hasTag(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $setGrowth(::BlockSource&, ::BlockPos const&, ::Block const&, ushort, int) const;

    MCNAPI ::ItemInstance const $getBaseSeed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
