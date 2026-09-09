#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Mob;
class Player;
class Random;
class Vec3;
struct ActorBlockSyncMessage;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class TopSnowBlock : public ::FallingBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mUsePartialHeight;
    ::ll::TypedStorage<1, 1, bool> mAllowFallOnPlace;
    // NOLINTEND

public:
    // prevent constructor by default
    TopSnowBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TopSnowBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual bool getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    virtual bool isLavaBlocking() const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const*) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual bool tryToPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::ActorBlockSyncMessage const*) const;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&) const;

    virtual bool canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;

    virtual bool shouldStopFalling(::Actor&) const;

    virtual bool canHaveExtraData() const;

    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    virtual ::mce::Color getDustColor(::Block const&) const;

    virtual std::string getDustParticleName(::Block const&) const;

    virtual bool isFreeToFall(::BlockSource&, ::BlockPos const&) const;

    virtual void startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TopSnowBlock(std::string const&, int, bool, bool);

    MCNAPI bool _canBeBuiltOver(::BlockSource const&, ::BlockPos const&, ::BlockType const*) const;

    MCNAPI ::ItemInstance getResourceItemFromFalling() const;

    MCNAPI bool melt(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI void startFallingIfLostSupport(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& buildSnowBlock(::BlockSource&, ::BlockPos const&, int, bool);

    MCNAPI static ::Block const& getCoveredBlock(::BlockSource const&, ::BlockPos const&);

    MCNAPI static ::Block const& getSnowBlockToBuild(::BlockSource const&, ::BlockPos const&, int, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& HALF_HEIGHT();

    MCNAPI static int const& HEIGHT_IMPASSABLE();

    MCNAPI static int const& MAX_HEIGHT();

    MCNAPI static ::BaseGameVersion const& TOP_SNOW_FALL_ON_PLACE();

    MCNAPI static ::BaseGameVersion const& TOP_SNOW_JAVA_PARITY_VERSION();

    MCNAPI static float const& TOP_SNOW_LAYER_HEIGHT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool, bool);
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

    MCNAPI bool
    $getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const*) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $tryToPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::ActorBlockSyncMessage const*) const;

    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;

    MCNAPI bool $shouldStopFalling(::Actor&) const;

    MCNAPI bool $canHaveExtraData() const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI std::string $getDustParticleName(::Block const&) const;

    MCNAPI bool $isFreeToFall(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $startFalling(::BlockSource&, ::BlockPos const&, ::Block const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
