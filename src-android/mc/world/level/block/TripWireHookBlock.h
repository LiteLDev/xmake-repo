#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class TripWireHookBlock : public ::BlockType {
public:
    // prevent constructor by default
    TripWireHookBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TripWireHookBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TripWireHookBlock(std::string const&, int);

    MCNAPI void _emitState(::BlockSource&, ::BlockPos const&, bool, bool, bool, bool) const;

    MCNAPI void calculateState(::BlockSource&, ::BlockPos const&, bool, int) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
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

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
