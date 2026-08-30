#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/WallConnectionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class Material;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class WallBlock : public ::BlockType {
public:
    // prevent constructor by default
    WallBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WallBlock();

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isWallBlock() const;

    virtual void onStructureBlockPlace(::BlockSource&, ::BlockPos const&) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WallBlock(std::string const&, int, ::BlockType const&);

    MCNAPI WallBlock(std::string const&, int, ::Material const&);

    MCNAPI ::WallConnectionType _desiredConnectionState(::BlockSource&, ::BlockPos const&, uchar const) const;

    MCNAPI bool _shouldBePost(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool _tryAddToTickingQueue(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void tryFixWallStates(::BlockSource&, ::BlockPos const&, int const) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& POST_HEIGHT();

    MCNAPI static float const& POST_WIDTH();

    MCNAPI static ::BaseGameVersion const& WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    MCNAPI static float const& WALL_HEIGHT();

    MCNAPI static float const& WALL_WIDTH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::BlockType const&);

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
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isWallBlock() const;

    MCNAPI void $onStructureBlockPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
