#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/WoodType.h"

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
class Player;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class FenceGateBlock : public ::BlockType {
public:
    // prevent constructor by default
    FenceGateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FenceGateBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool ignoreEntitiesOnPistonMove(::Block const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual bool isInteractiveBlock() const;

    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FenceGateBlock(std::string const&, int, ::WoodType);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void _setOpen(::BlockSource&, ::gsl::not_null<const Block*>, ::BlockPos const&, ::Player*, bool) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void resolveIsInWall(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AABB const& _getShape(::BlockPos const&, ::Block const&, ::AABB&, bool);

    MCNAPI static void _onSetupRedstoneComponent(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::WoodType);
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

    MCNAPI bool $ignoreEntitiesOnPistonMove(::Block const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
