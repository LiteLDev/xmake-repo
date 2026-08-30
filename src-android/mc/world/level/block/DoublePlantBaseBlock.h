#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Player;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class DoublePlantBaseBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mBottomVisualShape;
    // NOLINTEND

public:
    // prevent constructor by default
    DoublePlantBaseBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DoublePlantBaseBlock();

    virtual ::Block const* getNextBlockPermutation(::Block const&) const;

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual void checkAlive(::BlockSource&, ::BlockPos const&) const;

    virtual ::Block const& _keepRelevantStateForDropping(::Block const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DoublePlantBaseBlock(std::string const&, int);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;
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

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $checkAlive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::Block const& $_keepRelevantStateForDropping(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
