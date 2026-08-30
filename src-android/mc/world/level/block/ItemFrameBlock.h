#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class ItemFrameBlockActor;
class ItemInstance;
class MapItemSavedData;
class Player;
class Vec3;
struct ResourceDropsContext;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ItemFrameBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ItemFrameBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ItemFrameBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool isLavaBlocking() const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual bool getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool attack(::Player*, ::BlockPos const&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual ::HashedString getSpawnedItemName() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemFrameBlock(std::string const&, int);

    MCNAPI void _checkAchievements(::Player&, ::BlockPos const&) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
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

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI bool $getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI ::HashedString $getSpawnedItemName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
